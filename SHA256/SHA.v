module sha256 (
    input wire clk,
    input wire reset,
    input wire [511:0] message,   // 512-bit message block
    output reg [255:0] hash       // 256-bit hash output
);

    // SHA-256 Constants
    reg [31:0] K [0:63]; // Round constants
    reg [31:0] H [0:7];  // Hash values

    initial begin
        // SHA-256 Initial Hash Values (H)
        H[0] = 32'h6a09e667; H[1] = 32'hbb67ae85; H[2] = 32'h3c6ef372; H[3] = 32'ha54ff53a;
        H[4] = 32'h510e527f; H[5] = 32'h9b05688c; H[6] = 32'h1f83d9ab; H[7] = 32'h5be0cd19;

        // SHA-256 Round Constants (K)
        K[0] = 32'h428a2f98; K[1] = 32'h71374491; K[2] = 32'hb5c0fbcf; K[3] = 32'he9b5dba5;
        K[4] = 32'h3956c25b; K[5] = 32'h59f111f1; K[6] = 32'h923f82a4; K[7] = 32'hab1c5ed5;
        K[8] = 32'hd807aa98; K[9] = 32'h12835b01; K[10] = 32'h243185be; K[11] = 32'h550c7dc3;
        K[12] = 32'h72be5d74; K[13] = 32'h80deb1fe; K[14] = 32'h9bdc06a7; K[15] = 32'hc19bf174;
        // (Truncated for brevity, add remaining constants)
    end

    // Message Schedule Array
    reg [31:0] W [0:63];
    integer i;
    // Step 3: Compression Loop
    reg [31:0] a, b, c, d, e, f, g, h, temp1, temp2;

    always @(posedge clk or posedge reset) begin
        if (reset) begin
            hash = 0;
        end else begin
            // Step 1: Message Schedule (First 16 words directly from input message)
            for (i = 0; i < 16; i = i + 1) begin
                W[i] = message[511 - (i * 32) -: 32]; // Extract 32-bit chunks
            end

            // Step 2: Extend to 64 words
            for (i = 16; i < 64; i = i + 1) begin
                W[i] = W[i-16] + (W[i-15] >> 3) + W[i-7] + (W[i-2] >> 10);
            end

            

            a = H[0]; b = H[1]; c = H[2]; d = H[3];
            e = H[4]; f = H[5]; g = H[6]; h = H[7];

            for (i = 0; i < 64; i = i + 1) begin
                temp1 = h + ((e >> 6) ^ (e >> 11) ^ (e >> 25)) + ((e & f) ^ (~e & g)) + K[i] + W[i];
                temp2 = ((a >> 2) ^ (a >> 13) ^ (a >> 22)) + ((a & b) ^ (a & c) ^ (b & c));

                h = g; g = f; f = e;
                e = d + temp1;
                d = c; c = b; b = a;
                a = temp1 + temp2;
            end

            // Step 4: Update Hash Values
            H[0] = H[0] + a; H[1] = H[1] + b; H[2] = H[2] + c; H[3] = H[3] + d;
            H[4] = H[4] + e; H[5] = H[5] + f; H[6] = H[6] + g; H[7] = H[7] + h;

            // Step 5: Output Final Hash
            hash = {H[0], H[1], H[2], H[3], H[4], H[5], H[6], H[7]};
        end
    end
endmodule

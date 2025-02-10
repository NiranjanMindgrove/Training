module jcounter(
    input clk, reset,
    output reg [3:0]out
);

    always @(posedge clk or posedge reset)begin
        if(reset) out = 4'b0000;
        else begin
            out = {~out[0],out[3:1]};
        end
    end
endmodule


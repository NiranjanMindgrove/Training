module dflop(
    input clk, 
    input d, 
    input reset, 
    input preset, 
    output reg q, 
    output reg qbar
);

always @(*) begin
    if (reset) begin
        q = 1'b0;
        qbar = 1'b1;
    end
    else if (preset) begin
        q = 1'b1;
        qbar = 1'b0;
    end
    else begin
        q = d;
        qbar = ~d;
    end
end

// Optional: Initialization for simulation (not required for synthesis)
initial begin
    q = 1'b0;
    qbar = 1'b1;
end

endmodule

	

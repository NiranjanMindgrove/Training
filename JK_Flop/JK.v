module JK(
    input J, K, clk, reset,
    output reg q, qbar
);

initial begin
    q = 1'b0;
    qbar = 1'b1;
end

always @(*) begin
    if(reset) begin
        q = 1'b0;
        qbar = 1'b1;
    end
    else if(J==0 & K ==0)begin
        q = q;
        qbar = qbar;
    end
    else if(J==0 & K ==1) begin
        q = 1'b0;
        qbar = 1'b1;
    end
    else if (J==1 & K == 0)begin
        q = 1'b1;
        qbar = 1'b0;
    end
    else begin
        q = ~q;
        qbar = ~qbar;
    end
end

endmodule
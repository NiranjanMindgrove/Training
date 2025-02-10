module mux8(
	input [7:0]inp,
	input [2:0]sel,
	output reg out
);

always @(*)begin
	case(sel)
		3'b000: out = inp[0];	
		3'b001: out = inp[1];
		3'b010: out = inp[2];
		3'b011: out = inp[3];
		3'b100: out = inp[4];
		3'b101: out = inp[5];
		3'b110: out = inp[6];
		3'b111: out = inp[7];
		default: out = inp[0];
		
	endcase
end

endmodule

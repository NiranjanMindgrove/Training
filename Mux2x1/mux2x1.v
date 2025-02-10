module mux2x1(
	input in1,in0,sel,
	output reg out
);

assign out = sel ? in1 : in0;

endmodule

module adder(
	input a,b,cin,
	output wire sum, carry
);

assign sum = a ^ b ^ cin;
assign carry = (a&b) | (b&cin) | (cin&a);

endmodule

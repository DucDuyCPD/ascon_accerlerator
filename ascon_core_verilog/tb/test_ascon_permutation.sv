`timescale 1ns/1ps
module test_ascon_permutation;
	reg [63:0] x0_i, x1_i, x2_i, x3_i, x4_i;
	reg [63:0] x0_o, x1_o, x2_o, x3_o, x4_o;
	reg [63:0] rc;

ascon_permutation_p12 ascon_p_dut(
	.x0_i(x0_i),
	.x1_i(x1_i),
	.x2_i(x2_i),
	.x3_i(x3_i),
	.x4_i(x4_i),

	.x0_o(x0_o),
	.x1_o(x1_o),
	.x2_o(x2_o),
	.x3_o(x3_o),
	.x4_o(x4_o)
);

initial begin
	rc = 64'hf0;
	x0_i = 64'h0;
	x1_i = 64'h0;
	x2_i = 64'h0;
	x3_i = 64'h0;
	x4_i = 64'h0;
	
	#1;

	$display("======input=====");
	$display("x0_i = %16h",x0_i);
	$display("x1_i = %16h",x1_i);
	$display("x2_i = %16h",x2_i);
	$display("x3_i = %16h",x3_i);
	$display("x4_i = %16h",x4_i);

	$display("======output=====");
	$display("x0_o = %16h",x0_o);
	$display("x1_o = %16h",x1_o);
	$display("x2_o = %16h",x2_o);
	$display("x3_o = %16h",x3_o);
	$display("x4_o = %16h",x4_o);

	#10;
	$finish;
end
	
endmodule
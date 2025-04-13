module test_ascon_permutation_newver;

	reg clk, rst_n;
	reg en_p8, en_p12;
	reg x0_i, x1_i, x2_i, x3_i, x4_i;

	wire x0_o, x1_o, x2_o, x3_o, x4_o;
	wire done;

	ascon_permutation_multicycle_p4  dut(.*);

	always #50 clk = ~clk;

	initial begin
		clk = 0;
		rst_n = 0;
		#1;
		rst_n = 1;
		x0_i = 0; 
		x1_i = 0;
		x2_i = 0;
		x3_i = 0;
		x4_i = 0;
	end

	initial begin
		#20;
		en_p12 = 1;
		#300;
		en_p12 = 0;

		#400;


		$finish;
	end

	initial begin
	$dumpfile("wave.vcd");
	$dumpvars;
	
end

endmodule
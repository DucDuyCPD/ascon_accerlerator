module test_ascon_initialization;
	reg [127:0] key;
	reg [127:0] nonce;
	reg [1:0] sel_type;
	reg clk, rst_n;

	wire [63:0] x0, x1, x2, x3, x4;

	ascon_initialization ascon_initialization_dut(
		.clk(clk),
		.rst_n(rst_n)
,		.sel_type(sel_type),
		.key(key),
		.nonce(nonce),

		.x0(x0),
		.x1(x1),
		.x2(x2),
		.x3(x3),
		.x4(x4)
	);

	always #50 clk = ~clk;

	initial begin
		clk = 0;
		rst_n = 0;
		sel_type = 0;
		key = 0;
		nonce = 0;
	end

	initial begin
		#10 rst_n = 1;

		sel_type = 1;

		key = 128'h0;
		nonce = 128'h0;
		#100;

		#100;

		$display("======input=====");
		$display("sel_type = %16h", sel_type);
		$display("key      = %16h", key);
		$display("nonce    = %16h", nonce);


		$display("======output=====");
		$display("x0 = %16h",x0);
		$display("x1 = %16h",x1);
		$display("x2 = %16h",x2);
		$display("x3 = %16h",x3);
		$display("x4 = %16h",x4);

		#100 $finish;
	end
endmodule
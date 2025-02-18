`timescale 1ns/1ps
module test_ascon_hash;
	reg clk, rst_n;

//initialization i/o port
	reg [127:0] key;
	reg [127:0] nonce;
	reg [1:0] sel_type;

	wire [63:0] x0_init;
	wire [63:0] x1_init;
	wire [63:0] x2_init;
	wire [63:0] x3_init;
	wire [63:0] x4_init;
//========================

//process assconciated data i/o port	
	
	reg process_en;

	reg [32:0] data_length;
	reg [32:0] data_position;

	reg [127:0] data;

	reg [63:0] x0_i;
	reg [63:0] x1_i;
	reg [63:0] x2_i;
	reg [63:0] x3_i;
	reg [63:0] x4_i;

	wire [63:0] x0_o;
	wire [63:0] x1_o;
	wire [63:0] x2_o;
	wire [63:0] x3_o;
	wire [63:0] x4_o;

	wire process_err;
//===================================

//variable
	// parameter A0 = 128'h2073692073696854_207473657420796d; //little: 2073692073696854_207473657420796d  big: 5468697320697320_6d79207465737420
	// parameter A1 = 128'h636f727020726f66_6120676e69737365; //little: 636f727020726f66_6120676e69737365  big: 666f722070726f63_657373696e672061
	// parameter A2 = 128'h65746169636f7373_7320617461642064; //little: 65746169636f7373_7320617461642064  big: 73736f6369617465_6420646174612073
	// parameter A3 = 128'h706574; //little: 706574  big: 746570

	parameter A0 = 64'h2073692073696854;
	parameter A1 = 64'h207473657420796d; //little: 2073692073696854_207473657420796d  big: 5468697320697320_6d79207465737420
	parameter A2 = 64'h636f727020726f66;
	parameter A3 = 64'h6120676e69737365; //little: 636f727020726f66_6120676e69737365  big: 666f722070726f63_657373696e672061
	parameter A4 = 64'h65746169636f7373;
	parameter A5 = 64'h7320617461642064; //little: 65746169636f7373_7320617461642064  big: 73736f6369617465_6420646174612073
	parameter A6 = 64'h20646e6120706574;
	parameter A7 = 64'h74726f736261; //little: 20646e6120706574_74726f736261  big: 74657020616e6420_6162736f7274

//========
	ascon_initialization ascon_initialization_dut(
		.clk(clk), .rst_n(rst_n),
		.sel_type(sel_type),
		.key(key),
		.nonce(nonce),

		.x0(x0_init),
		.x1(x1_init),
		.x2(x2_init),
		.x3(x3_init),
		.x4(x4_init)
	);

	ascon_AE_AM ascon_hash_dut(
	.clk(clk), .rst_n(rst_n),

	.process_en(process_en),
	.sel_type(sel_type),

	.data_length(data_length),
	.data_position(data_position),

	.data(data),

	.x0_i(x0_i),
	.x1_i(x1_i),
	.x2_i(x2_i),
	.x3_i(x3_i),
	.x4_i(x4_i),

	.x0_o(x0_o),
	.x1_o(x1_o),
	.x2_o(x2_o),
	.x3_o(x3_o),
	.x4_o(x4_o),

	.process_err(process_err)
);

	always #50 clk = ~clk;

	initial begin
		clk = 0;
		rst_n = 0;
		
		key = 0;
		nonce = 0;
		sel_type = 1;

		process_en = 0;

		data_length = 0;
		data_position = 0;

		data = 0;

		x0_i = 0;
		x1_i = 0;
		x2_i = 0;
		x3_i = 0;
		x4_i = 0;
	end

	initial begin
		#10;
		rst_n = 1;
		process_en = 1;
		#10;

		#100;
		$display("=========================");
		$display("x0_init = %16h",x0_init);
		$display("x1_init = %16h",x1_init);
		$display("x2_init = %16h",x2_init);
		$display("x3_init = %16h",x3_init);
		$display("x4_init = %16h",x4_init);

		data_length = 62;
		data_position = 0;
		data = A0;
		x0_i = x0_init;
		x1_i = x1_init;
		x2_i = x2_init;
		x3_i = x3_init;
		x4_i = x4_init;
		#100;
		$display("=========================");
		$display("x0_o = %16h",x0_o);
		$display("x1_o = %16h",x1_o);
		$display("x2_o = %16h",x2_o);
		$display("x3_o = %16h",x3_o);
		$display("x4_o = %16h",x4_o);

		data_length = 62;
		data_position = 8;
		data = A1;
		x0_i = x0_o;
		x1_i = x1_o;
		x2_i = x2_o;
		x3_i = x3_o;
		x4_i = x4_o;
		#100;
		$display("=========================");
		$display("x0_o = %16h",x0_o);
		$display("x1_o = %16h",x1_o);
		$display("x2_o = %16h",x2_o);
		$display("x3_o = %16h",x3_o);
		$display("x4_o = %16h",x4_o);

		data_length = 62;
		data_position = 16;
		data = A2; // "ASCONenc"
		x0_i = x0_o;
		x1_i = x1_o;
		x2_i = x2_o;
		x3_i = x3_o;
		x4_i = x4_o;
		#100;
		$display("=========================");
		$display("x0_o = %16h",x0_o);
		$display("x1_o = %16h",x1_o);
		$display("x2_o = %16h",x2_o);
		$display("x3_o = %16h",x3_o);
		$display("x4_o = %16h",x4_o);

		data_length = 62;
		data_position = 24;
		data = A3; // "ASCONenc"
		x0_i = x0_o;
		x1_i = x1_o;
		x2_i = x2_o;
		x3_i = x3_o;
		x4_i = x4_o;
		#100;
		$display("=========================");
		$display("x0_o = %16h",x0_o);
		$display("x1_o = %16h",x1_o);
		$display("x2_o = %16h",x2_o);
		$display("x3_o = %16h",x3_o);
		$display("x4_o = %16h",x4_o);

		data_length = 62;
		data_position = 32;
		data = A4; // "ASCONenc"
		x0_i = x0_o;
		x1_i = x1_o;
		x2_i = x2_o;
		x3_i = x3_o;
		x4_i = x4_o;
		#100;
		$display("=========================");
		$display("x0_o = %16h",x0_o);
		$display("x1_o = %16h",x1_o);
		$display("x2_o = %16h",x2_o);
		$display("x3_o = %16h",x3_o);
		$display("x4_o = %16h",x4_o);

		data_length = 62;
		data_position = 40;
		data = A5; // "ASCONenc"
		x0_i = x0_o;
		x1_i = x1_o;
		x2_i = x2_o;
		x3_i = x3_o;
		x4_i = x4_o;
		#100;
		$display("=========================");
		$display("x0_o = %16h",x0_o);
		$display("x1_o = %16h",x1_o);
		$display("x2_o = %16h",x2_o);
		$display("x3_o = %16h",x3_o);
		$display("x4_o = %16h",x4_o);

		data_length = 62;
		data_position = 48;
		data = A6; // "ASCONenc"
		x0_i = x0_o;
		x1_i = x1_o;
		x2_i = x2_o;
		x3_i = x3_o;
		x4_i = x4_o;
		#100;
		$display("=========================");
		$display("x0_o = %16h",x0_o);
		$display("x1_o = %16h",x1_o);
		$display("x2_o = %16h",x2_o);
		$display("x3_o = %16h",x3_o);
		$display("x4_o = %16h",x4_o);

		data_length = 62;
		data_position = 56;
		data = A7; // "ASCONenc"
		x0_i = x0_o;
		x1_i = x1_o;
		x2_i = x2_o;
		x3_i = x3_o;
		x4_i = x4_o;
		#100;
		$display("=========================");
		$display("x0_o = %16h",x0_o);
		$display("x1_o = %16h",x1_o);
		$display("x2_o = %16h",x2_o);
		$display("x3_o = %16h",x3_o);
		$display("x4_o = %16h",x4_o);

		#100 $finish;

	end

	initial begin
		$dumpfile("wave.vcd");
		$dumpvars;
	end

endmodule
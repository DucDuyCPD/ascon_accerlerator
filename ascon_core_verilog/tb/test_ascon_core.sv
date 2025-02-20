`timescale 1ns/1ps
module test_ascon_core;

parameter A0 = 128'h2073692073696854_207473657420796d; 
parameter A1 = 128'h636f727020726f66_6120676e69737365; 
parameter A2 = 128'h65746169636f7373_7320617461642064; 
parameter A3 = 128'h20646e6120706574_62726f736261; 

parameter C0 = 128'h9f0543260ffbdc18_9b07659e18ce73bf; 
parameter C1 = 128'h8cccbaf0cde5c93c_c799a614bc8ceca8; 
parameter C2 = 128'hfe1edd42a1116999_175e00bf2b9c6ad2;
parameter C3 = 128'hb6e8bbc210323af7_c5165724dae8;

parameter M0 = 64'h2073692073696854;
parameter M1 = 64'h207473657420796d; 
parameter M2 = 64'h636f727020726f66;
parameter M3 = 64'h6120676e69737365; 
parameter M4 = 64'h65746169636f7373;
parameter M5 = 64'h7320617461642064; 
parameter M6 = 64'h20646e6120706574;
parameter M7 = 64'h62726f736261; 

reg clk, rst_n;
reg [127:0] key, nonce;
reg [1:0] sel_type;
reg mode_sel_encrypt_decrypt;
reg [31:0] data_length, data_position;
reg [127:0] data_in;
wire [127:0] data_out;

reg process_en_init, process_en_AE_AM, process_en_encrypt_decrypt, process_en_hash, process_en_final;

wire [127:0] tag;

ascon_core ascon_core_dut(.*);

always #50 clk = ~clk;

initial begin
	clk = 1;
	rst_n = 1;
	#10 rst_n = 0;
	#10 rst_n = 1;

	key = 128'hadc05342320247b1_78fd74d65422c04a;
	// key = 0;
	nonce = 0;
	sel_type = 1;

	mode_sel_encrypt_decrypt = 0;

	data_length = 0;
	data_position = 0;

	data_in = 0;

	process_en_init = 0;
	process_en_AE_AM = 0;
	process_en_encrypt_decrypt = 0;
	process_en_hash = 0;
	process_en_final = 0;
end

initial begin
//ENCRYPT_DECRYPT
	// #120;
	// process_en_init = 1;
	// process_en_AE_AM = 0;
	// process_en_encrypt_decrypt = 0;
	// process_en_hash = 0;
	// process_en_final = 0;
	
	// #100;
	// process_en_init = 0;
	// process_en_AE_AM = 1;
	// process_en_encrypt_decrypt = 0;
	// process_en_hash = 0;
	// process_en_final = 0;

	// data_length = 62;
	// data_position = 0;
	// data_in = A0;
	// #200;

	// data_length = 62;
	// data_position = 16;
	// data_in = A1;
	// #200;

	// data_length = 62;
	// data_position = 32;
	// data_in = A2;
	// #200;

	// data_length = 62;
	// data_position = 48;
	// data_in = A3;
	// #200;

	// process_en_init = 0;
	// process_en_AE_AM = 0;
	// process_en_encrypt_decrypt = 1;
	// process_en_hash = 0;
	// process_en_final = 0;

	// data_length = 62;
	// data_position = 0;
	// data_in = A0;
	// #200;

	// data_length = 62;
	// data_position = 16;
	// data_in = A1;
	// #200;

	// data_length = 62;
	// data_position = 32;
	// data_in = A2;
	// #200;

	// data_length = 62;
	// data_position = 48;
	// data_in = A3;
	// #200;

	// process_en_init = 0;
	// process_en_AE_AM = 0;
	// process_en_encrypt_decrypt = 0;
	// process_en_hash = 0;
	// process_en_final = 1;
	// #200;

	// process_en_init = 0;
	// process_en_AE_AM = 0;
	// process_en_encrypt_decrypt = 0;
	// process_en_hash = 0;
	// process_en_final = 0;
	// #200;

//HASH
	#120;
	process_en_init = 1;
	process_en_AE_AM = 0;
	process_en_encrypt_decrypt = 0;
	process_en_hash = 0;
	process_en_final = 0;

	#100;
	process_en_init = 0;
	process_en_AE_AM = 1;
	process_en_encrypt_decrypt = 0;
	process_en_hash = 0;
	process_en_final = 0;

	data_length = 62;
	data_position = 0;
	data_in = M0;
	#200;

	data_length = 62;
	data_position = 8;
	data_in = M1;
	#200;

	data_length = 62;
	data_position = 16;
	data_in = M2;
	#200;

	data_length = 62;
	data_position = 24;
	data_in = M3;
	#200;

	data_length = 62;
	data_position = 32;
	data_in = M4;
	#200;

	data_length = 62;
	data_position = 40;
	data_in = M5;
	#200;

	data_length = 62;
	data_position = 48;
	data_in = M6;
	#200;

	data_length = 62;
	data_position = 56;
	data_in = M7;
	#200;

	process_en_init = 0;
	process_en_AE_AM = 0;
	process_en_encrypt_decrypt = 0;
	process_en_hash = 1;
	process_en_final = 0;

	#200;
	#200;
	#200;
	#200;
	

	#1000;
	$finish;
end

initial begin
	$dumpfile("wave.vcd");
	$dumpvars;
end

endmodule : test_ascon_core
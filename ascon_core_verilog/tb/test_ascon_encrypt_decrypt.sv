`timescale 1ns/1ps
module test_ascon_encrypt_decrypt;
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
	
	reg process_en_AE_AM;

	reg [31:0] data_length;
	reg [31:0] data_position;

	reg [127:0] data;

	reg [63:0] x0_i_AE_AM;
	reg [63:0] x1_i_AE_AM;
	reg [63:0] x2_i_AE_AM;
	reg [63:0] x3_i_AE_AM;
	reg [63:0] x4_i_AE_AM;

	wire [63:0] x0_o_AE_AM;
	wire [63:0] x1_o_AE_AM;
	wire [63:0] x2_o_AE_AM;
	wire [63:0] x3_o_AE_AM;
	wire [63:0] x4_o_AE_AM;

	wire process_err_AE_AM;
//===================================

//process plaintext ciphertext i/o port
	reg [31:0] plaintext_ciphertext_length;
	reg [31:0] plaintext_ciphertext_position;
	reg [127:0] plaintext_ciphertext_datain;
	reg encrypt_decrypt_mode_sel;
	reg process_en_encrypt_decrypt;

	reg [63:0] x0_i_encrypt_decrypt;
	reg [63:0] x1_i_encrypt_decrypt;
	reg [63:0] x2_i_encrypt_decrypt;
	reg [63:0] x3_i_encrypt_decrypt;
	reg [63:0] x4_i_encrypt_decrypt;

	wire [63:0] x0_o_encrypt_decrypt;
	wire [63:0] x1_o_encrypt_decrypt;
	wire [63:0] x2_o_encrypt_decrypt;
	wire [63:0] x3_o_encrypt_decrypt;
	wire [63:0] x4_o_encrypt_decrypt;

	wire process_err_plaintext_ciphertext;

	wire [127:0] plaintext_ciphertext_dataout;
//===============================

//finalization i/p port
	reg [63:0] x0_i_final;
	reg [63:0] x1_i_final;
	reg [63:0] x2_i_final;
	reg [63:0] x3_i_final;
	reg [63:0] x4_i_final;

	wire [127:0] tag;
//=================================

//variable

	// parameter A0 = 128'h2073692073696854_207473657420796d; //little: 2073692073696854_207473657420796d  big: 5468697320697320_6d79207465737420
	// parameter A1 = 128'h636f727020726f66_6120676e69737365; //little: 636f727020726f66_6120676e69737365  big: 666f722070726f63_657373696e672061
	// parameter A2 = 128'h65746169636f7373_7320617461642064; //little: 65746169636f7373_7320617461642064  big: 73736f6369617465_6420646174612073
	// parameter A3 = 128'h20646e6120706574_62726f736261; //little: 20646e6120706574_74726f736261  big: 74657020616e6420_6162736f7274

	parameter A0 = 128'h2073692073696854_207473657420796d; //little: 2073692073696854_207473657420796d  big: 5468697320697320_6d79207465737420
	parameter A1 = 128'h636f727020726f66_6120676e69737365; //little: 636f727020726f66_6120676e69737365  big: 666f722070726f63_657373696e672061
	parameter A2 = 128'h65746169636f7373_7320617461642064; //little: 65746169636f7373_7320617461642064  big: 73736f6369617465_6420646174612073
	parameter A3 = 128'h20646e6120706574_62726f736261; //little: 20646e6120706574_74726f736261  big: 74657020616e6420_6162736f7274 

	parameter C0 = 128'h9f0543260ffbdc18_9b07659e18ce73bf; //little: 2073692073696854_207473657420796d  big: 5468697320697320_6d79207465737420
	parameter C1 = 128'h8cccbaf0cde5c93c_c799a614bc8ceca8; //little: 636f727020726f66_6120676e69737365  big: 666f722070726f63_657373696e672061
	parameter C2 = 128'hfe1edd42a1116999_175e00bf2b9c6ad2; //little: 65746169636f7373_7320617461642064  big: 73736f6369617465_6420646174612073
	parameter C3 = 128'hb6e8bbc210323af7_c5165724dae8; //little: 20646e6120706574_74726f736261  big: 74657020616e6420_6162736f7274

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

	ascon_AE_AM ascon_process_associated_data_dut(
		.clk(clk), .rst_n(rst_n),

		.process_en(process_en_AE_AM),
		.sel_type(sel_type),

		.data_length(data_length),
		.data_position(data_position),

		.data(data),

		.x0_i(x0_i_AE_AM),
		.x1_i(x1_i_AE_AM),
		.x2_i(x2_i_AE_AM),
		.x3_i(x3_i_AE_AM),
		.x4_i(x4_i_AE_AM),

		.x0_o(x0_o_AE_AM),
		.x1_o(x1_o_AE_AM),
		.x2_o(x2_o_AE_AM),
		.x3_o(x3_o_AE_AM),
		.x4_o(x4_o_AE_AM),

		.process_err(process_err_AE_AM)
	);

	ascon_encrypt_decrypt ascon_encrypt_decrypt_dut(
		.clk(clk), .rst_n(rst_n),

		.process_en(process_en_encrypt_decrypt),
		.process_mode_sel(encrypt_decrypt_mode_sel),

		.text_length(plaintext_ciphertext_length),
		.text_position(plaintext_ciphertext_position),

		.data_in(plaintext_ciphertext_datain),

		.x0_i(x0_i_encrypt_decrypt),
		.x1_i(x1_i_encrypt_decrypt),
		.x2_i(x2_i_encrypt_decrypt),
		.x3_i(x3_i_encrypt_decrypt),
		.x4_i(x4_i_encrypt_decrypt),

		.data_out(plaintext_ciphertext_dataout),

		.x0_o(x0_o_encrypt_decrypt),
		.x1_o(x1_o_encrypt_decrypt),
		.x2_o(x2_o_encrypt_decrypt),
		.x3_o(x3_o_encrypt_decrypt),
		.x4_o(x4_o_encrypt_decrypt),

		.process_err(process_err_plaintext_ciphertext)
	);

	ascon_finalization ascon_finalization_dut (
		.clk(clk), .rst_n(rst_n),

		.key(key),

		.x0_i(x0_i_final),
		.x1_i(x1_i_final),
		.x2_i(x2_i_final),
		.x3_i(x3_i_final),
		.x4_i(x4_i_final),

		.tag(tag)
	);

	always #50 clk = ~clk;

	initial begin
		clk = 0;
		rst_n = 0;

		// key = 128'hadc05342320247b1_78fd74d65422c04a;
		// key = 128'h78fd74d65422c04a_adc05342320247b1;
		key = 0;
		nonce = 0;
		sel_type = 0;

		process_en_AE_AM = 0;

		data_length = 0;
		data_position = 0;

		data = 0;

		x0_i_AE_AM = 0;
		x1_i_AE_AM = 0;
		x2_i_AE_AM = 0;
		x3_i_AE_AM = 0;
		x4_i_AE_AM = 0;

		plaintext_ciphertext_length = 0;
		plaintext_ciphertext_position = 0;
		plaintext_ciphertext_datain = 0;
		encrypt_decrypt_mode_sel = 0;
		process_en_encrypt_decrypt = 0;

		x0_i_encrypt_decrypt = 0;
		x1_i_encrypt_decrypt = 0;
		x2_i_encrypt_decrypt = 0;
		x3_i_encrypt_decrypt = 0;
		x4_i_encrypt_decrypt = 0;
	end

	task AE_AM_LOOP();
		input reg [31:0] LENGTH;
		input reg [31:0] POSITION;
		input reg [127:0] DATA;

		begin
			data_length = LENGTH;
			data_position = POSITION;
			data = DATA;

			x0_i_AE_AM = x0_o_AE_AM;
			x1_i_AE_AM = x1_o_AE_AM;
			x2_i_AE_AM = x2_o_AE_AM;
			x3_i_AE_AM = x3_o_AE_AM;
			x4_i_AE_AM = x4_o_AE_AM;

			#100;

			$display("==========AE_AM_LOOP==========");
			$display("x0_o = %16h",x0_o_AE_AM);
			$display("x1_o = %16h",x1_o_AE_AM);
			$display("x2_o = %16h",x2_o_AE_AM);
			$display("x3_o = %16h",x3_o_AE_AM);
			$display("x4_o = %16h",x4_o_AE_AM);
		end

	endtask

	task ENCRYPT_DECRYPT_LOOP();
		input reg [31:0] LENGTH;
		input reg [31:0] POSITION;
		input reg [127:0] DATA;

		begin
			plaintext_ciphertext_length = LENGTH;
			plaintext_ciphertext_position = POSITION;
			plaintext_ciphertext_datain = DATA;

			x0_i_encrypt_decrypt = x0_o_encrypt_decrypt;
			x1_i_encrypt_decrypt = x1_o_encrypt_decrypt;
			x2_i_encrypt_decrypt = x2_o_encrypt_decrypt;
			x3_i_encrypt_decrypt = x3_o_encrypt_decrypt;
			x4_i_encrypt_decrypt = x4_o_encrypt_decrypt;

			#100;

			$display("=====ENCRYPT_DECRYPT_LOOP=====");
			$display("x0_o = %16h",x0_o_encrypt_decrypt);
			$display("x1_o = %16h",x1_o_encrypt_decrypt);
			$display("x2_o = %16h",x2_o_encrypt_decrypt);
			$display("x3_o = %16h",x3_o_encrypt_decrypt);
			$display("x4_o = %16h",x4_o_encrypt_decrypt);

			$display("plaintext_ciphertext = %16h",plaintext_ciphertext_dataout);
		end

	endtask

	initial begin
		#10;
		rst_n = 1;

		process_en_AE_AM = 1;

		#10;

		#100;

		$display("========initialization========");
		$display("x0_o = %16h",x0_init);
		$display("x1_o = %16h",x1_init);
		$display("x2_o = %16h",x2_init);
		$display("x3_o = %16h",x3_init);
		$display("x4_o = %16h",x4_init);

// AE_AM_LOOP
		data_length = 62;
		data_position = 0;
		data = A0;
		x0_i_AE_AM = x0_init;
		x1_i_AE_AM = x1_init;
		x2_i_AE_AM = x2_init;
		x3_i_AE_AM = x3_init;
		x4_i_AE_AM = x4_init;
		#100;
		$display("==========AE_AM_LOOP==========");
		$display("x0_o = %16h",x0_o_AE_AM);
		$display("x1_o = %16h",x1_o_AE_AM);
		$display("x2_o = %16h",x2_o_AE_AM);
		$display("x3_o = %16h",x3_o_AE_AM);
		$display("x4_o = %16h",x4_o_AE_AM);

		AE_AM_LOOP(62,16, A1);
		AE_AM_LOOP(62,32, A2);
		AE_AM_LOOP(62,48, A3);

		process_en_AE_AM = 0;


// ENCRYPT_DECRYPT_LOOP
	//ENCRYPT
		// process_en_encrypt_decrypt = 1;
		// encrypt_decrypt_mode_sel = 0;

		// plaintext_ciphertext_length = 62;
		// plaintext_ciphertext_position = 0;
		// plaintext_ciphertext_datain = A0;
		// x0_i_encrypt_decrypt = x0_o_AE_AM;
		// x1_i_encrypt_decrypt = x1_o_AE_AM;
		// x2_i_encrypt_decrypt = x2_o_AE_AM;
		// x3_i_encrypt_decrypt = x3_o_AE_AM;
		// x4_i_encrypt_decrypt = x4_o_AE_AM;
		// #100;
		// $display("=====ENCRYPT_DECRYPT_LOOP=====");
		// $display("x0_o = %16h",x0_o_encrypt_decrypt);
		// $display("x1_o = %16h",x1_o_encrypt_decrypt);
		// $display("x2_o = %16h",x2_o_encrypt_decrypt);
		// $display("x3_o = %16h",x3_o_encrypt_decrypt);
		// $display("x4_o = %16h",x4_o_encrypt_decrypt);
		// $display("plaintext_ciphertext = %16h",plaintext_ciphertext_dataout);

		// ENCRYPT_DECRYPT_LOOP(62,16, A1);
		// ENCRYPT_DECRYPT_LOOP(62,32, A2);
		// ENCRYPT_DECRYPT_LOOP(62,48, A3);
	//DECRYPT
		process_en_encrypt_decrypt = 1;
		encrypt_decrypt_mode_sel = 1;

		plaintext_ciphertext_length = 62;
		plaintext_ciphertext_position = 0;
		plaintext_ciphertext_datain = C0;
		x0_i_encrypt_decrypt = x0_o_AE_AM;
		x1_i_encrypt_decrypt = x1_o_AE_AM;
		x2_i_encrypt_decrypt = x2_o_AE_AM;
		x3_i_encrypt_decrypt = x3_o_AE_AM;
		x4_i_encrypt_decrypt = x4_o_AE_AM;
		#100;
		$display("=====ENCRYPT_DECRYPT_LOOP=====");
		$display("x0_o = %16h",x0_o_encrypt_decrypt);
		$display("x1_o = %16h",x1_o_encrypt_decrypt);
		$display("x2_o = %16h",x2_o_encrypt_decrypt);
		$display("x3_o = %16h",x3_o_encrypt_decrypt);
		$display("x4_o = %16h",x4_o_encrypt_decrypt);
		$display("plaintext_ciphertext = %16h",plaintext_ciphertext_dataout);

		ENCRYPT_DECRYPT_LOOP(62,16, C1);
		ENCRYPT_DECRYPT_LOOP(62,32, C2);
		ENCRYPT_DECRYPT_LOOP(62,48, C3);
//FINALIZATION
		process_en_encrypt_decrypt = 0;
		encrypt_decrypt_mode_sel = 0;

		x0_i_final = x0_o_encrypt_decrypt;
		x1_i_final = x1_o_encrypt_decrypt;
		x2_i_final = x2_o_encrypt_decrypt;
		x3_i_final = x3_o_encrypt_decrypt;
		x4_i_final = x4_o_encrypt_decrypt;

		#100;

		$display("=========FINALIZATION=========");
		$display("tag = %16h",tag);

		#100 $finish;
	end

	initial begin
		$dumpfile("wave.vcd");
		$dumpvars;
	end

endmodule
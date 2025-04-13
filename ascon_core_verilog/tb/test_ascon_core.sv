`timescale 1ns/1ps
module test_ascon_core;

reg clk, rst_n;
reg [127:0] key, nonce;
reg [1:0] sel_type;
reg mode_sel_encrypt_decrypt;
reg [31:0] data_length, data_position;
reg [127:0] data_in;
wire [127:0] data_out;
wire err;
wire done;
reg process_en_init, process_en_AD_AM, process_en_encrypt_decrypt, process_en_hash, process_en_final;
wire [127:0] tag;

ascon_core ascon_core_dut(.*);

parameter CLOCK_PERIOD = 100;
always #(CLOCK_PERIOD/2) clk = ~clk;

//==============doc file==============
bit [63:0] data_read_file_key [int];
bit [63:0] data_read_file_nonce [int];
bit [63:0] data_read_file_plaintext [int];
bit [63:0] data_read_file_ass_data [int];
bit [63:0] data_read_file_ciphertext [int];
bit [63:0] data_read_file_tag [int];
bit [63:0] data_read_file_message [int];
bit [63:0] data_read_file_hash_out [int];


bit [127:0] KEY;
bit [127:0] NONCE;
bit [127:0] PLAINTEXT [int];
bit [127:0] ASS_DATA [int];
bit [127:0] CIPHERTEXT [int];
bit [127:0] TAG;
bit [127:0] MESSAGE [int];
bit [127:0] HASH_OUT [int];

bit [31:0] PLAINTEXT_LENGTH;
bit [31:0] ASS_DATA_LENGTH;
bit [31:0] CIPHERTEXT_LENGTH;
bit [31:0] MESSAGE_LENGTH;

int count;

initial begin
	$display("==========generate data result:");

	$readmemh("generate_result/key.hex",        data_read_file_key);
	$readmemh("generate_result/nonce.hex",      data_read_file_nonce);
	$readmemh("generate_result/plaintext.hex",  data_read_file_plaintext);
	$readmemh("generate_result/ass_data.hex",   data_read_file_ass_data);
	$readmemh("generate_result/ciphertext.hex", data_read_file_ciphertext);
	$readmemh("generate_result/tag.hex",        data_read_file_tag);
	$readmemh("generate_result/message.hex",        data_read_file_message);
	$readmemh("generate_result/hash_out.hex",        data_read_file_hash_out);

	// foreach (data_read_file_key[i]       ) $display("data_read_file_key[%3d] = %h", i, data_read_file_key[i]);
	// foreach (data_read_file_nonce[i]     ) $display("data_read_file_nonce[%3d] = %h", i, data_read_file_nonce[i]);
	// foreach (data_read_file_plaintext[i] ) $display("data_read_file_plaintext[%3d] = %h", i, data_read_file_plaintext[i]);
	// foreach (data_read_file_ass_data[i]  ) $display("data_read_file_ass_data[%3d] = %h", i, data_read_file_ass_data[i]);
	// foreach (data_read_file_ciphertext[i]) $display("data_read_file_ciphertext[%3d] = %h", i, data_read_file_ciphertext[i]);
	// foreach (data_read_file_tag[i]       ) $display("data_read_file_tag[%3d] = %h", i, data_read_file_tag[i]);
	// foreach (data_read_file_message[i]   ) $display("data_read_file_message[%3d] = %h", i, data_read_file_message[i]);
	// foreach (data_read_file_hash_out[i]  ) $display("data_read_file_hash_out[%3d] = %h", i, data_read_file_hash_out[i]);

	KEY = {data_read_file_key[0], data_read_file_key[1]};
	NONCE = {data_read_file_nonce[0], data_read_file_nonce[1]};
	TAG = {data_read_file_tag[1], data_read_file_tag[0]};
	// $display("KEY: %h", KEY);
	// $display("NONCE: %h", NONCE);
	$display("TAG: %h", TAG);

	PLAINTEXT_LENGTH = data_read_file_plaintext[0][31:0];
	// $display("PLAINTEXT_LENGTH: %3d",PLAINTEXT_LENGTH);
	count = 0;
	for (int i = 1; i < data_read_file_plaintext.num(); i=i+2) begin
		PLAINTEXT[count] = {data_read_file_plaintext[i], data_read_file_plaintext[i+1]};
		count = count + 1;
	end
	// foreach (PLAINTEXT[i]) $display("PLAINTEXT[%3d] = %h", i, PLAINTEXT[i]);

	ASS_DATA_LENGTH = data_read_file_ass_data[0][31:0];
	// $display("ASS_DATA_LENGTH: %3d",ASS_DATA_LENGTH);
	count = 0;
	for (int i = 1; i < data_read_file_ass_data.num(); i=i+2) begin
		ASS_DATA[count] = {data_read_file_ass_data[i], data_read_file_ass_data[i+1]};
		count = count + 1;
	end
	// foreach (ASS_DATA[i]) $display("ASS_DATA[%3d] = %h", i, ASS_DATA[i]);

	CIPHERTEXT_LENGTH = data_read_file_ciphertext[0][31:0];
	// $display("CIPHERTEXT_LENGTH: %3d",CIPHERTEXT_LENGTH);
	count = 0;
	for (int i = 1; i < data_read_file_ciphertext.num(); i=i+2) begin
		CIPHERTEXT[count] = {data_read_file_ciphertext[i], data_read_file_ciphertext[i+1]};
		count = count + 1;
	end
	// foreach (CIPHERTEXT[i]) $display("CIPHERTEXT[%3d] = %h", i, CIPHERTEXT[i]);

	MESSAGE_LENGTH = data_read_file_message[0][31:0];
	// $display("MESSAGE_LENGTH: %3d",MESSAGE_LENGTH);
	count = 0;
	for (int i = 1; i < data_read_file_message.num(); i=i+1) begin
		MESSAGE[count] = {data_read_file_message[i], 64'h0};
		count = count + 1;
	end
	// foreach (MESSAGE[i]) $display("MESSAGE[%3d] = %h", i, MESSAGE[i]);

	count = 0;
	for (int i = 0; i < data_read_file_hash_out.num(); i=i+1) begin
		HASH_OUT[count] = {data_read_file_hash_out[i], 64'h0};
		count = count + 1;
	end
	// foreach (HASH_OUT[i]) $display("HASH_OUT[%3d] = %h", i, HASH_OUT[i]);
end

//====================================

task INITIALIZATION;
	input reg [1:0] select_type;
	begin
		process_en_init = 0;
		process_en_AD_AM = 0;
		process_en_encrypt_decrypt = 0;
		process_en_hash = 0;
		process_en_final = 0;

		#(CLOCK_PERIOD);
		process_en_init = 1; sel_type = select_type;

		wait (done == 1);
		#(CLOCK_PERIOD);		
		process_en_init = 0;

	end
endtask

task ASSOCIATED_DATA;
	input reg [127:0] in;
	input reg [31:0] position;
	reg [127:0] out;
	begin
		#(CLOCK_PERIOD);		
		data_length = ASS_DATA_LENGTH;
		#(CLOCK_PERIOD);		
		data_position = position;

		#(CLOCK_PERIOD);		
		data_in [95:64] = in[95:64];
		#(CLOCK_PERIOD);		
		data_in [127:96] = in[127:96];
		#(CLOCK_PERIOD);		
		data_in [31:0] = in[31:0];
		#(CLOCK_PERIOD);		
		data_in [63:32] = in[63:32];

		#(CLOCK_PERIOD);		
		process_en_AD_AM = 1;

		wait (done == 1);
		#(CLOCK_PERIOD);		
		process_en_AD_AM = 0;
	end
endtask

task ENCRYPT;
	input reg [127:0] in;
	input reg [31:0] position;
	reg [127:0] out;
	begin
		#(CLOCK_PERIOD);		
		data_length = PLAINTEXT_LENGTH;
		#(CLOCK_PERIOD);		
		data_position = position;

		#(CLOCK_PERIOD);		
		data_in [95:64] = in[95:64];
		#(CLOCK_PERIOD);		
		data_in [127:96] = in[127:96];
		#(CLOCK_PERIOD);		
		data_in [31:0] = in[31:0];
		#(CLOCK_PERIOD);		
		data_in [63:32] = in[63:32];

		#(CLOCK_PERIOD);		
		process_en_encrypt_decrypt = 1; mode_sel_encrypt_decrypt = 0;

		wait (done == 1);
		#(CLOCK_PERIOD);		
		process_en_encrypt_decrypt = 0;

		#(CLOCK_PERIOD);		
		out [95:64] = data_out[95:64];
		#(CLOCK_PERIOD);		
		out [127:96] = data_out[127:96];
		#(CLOCK_PERIOD);		
		out [31:0] = data_out[31:0];
		#(CLOCK_PERIOD);		
		out [63:32] = data_out[63:32];

	end
endtask

task DECRYPT;
	input reg [127:0] in;
	input reg [31:0] position;
	reg [127:0] out;
	begin
		#(CLOCK_PERIOD);		
		data_length = PLAINTEXT_LENGTH;
		#(CLOCK_PERIOD);		
		data_position = position;

		#(CLOCK_PERIOD);		
		data_in [95:64] = in[95:64];
		#(CLOCK_PERIOD);		
		data_in [127:96] = in[127:96];
		#(CLOCK_PERIOD);		
		data_in [31:0] = in[31:0];
		#(CLOCK_PERIOD);		
		data_in [63:32] = in[63:32];

		#(CLOCK_PERIOD);		
		process_en_encrypt_decrypt = 1; mode_sel_encrypt_decrypt = 1;

		wait (done == 1);
		#(CLOCK_PERIOD);		
		process_en_encrypt_decrypt = 0;

		#(CLOCK_PERIOD);		
		out [95:64] = data_out[95:64];
		#(CLOCK_PERIOD);		
		out [127:96] = data_out[127:96];
		#(CLOCK_PERIOD);		
		out [31:0] = data_out[31:0];
		#(CLOCK_PERIOD);		
		out [63:32] = data_out[63:32];

	end
endtask

task FINALIZATION;
	reg [127:0] tag_out;
	begin
		
		#(CLOCK_PERIOD);		
		process_en_final = 1;
		wait (done == 1);
		#(CLOCK_PERIOD);		
		// process_en_final = 0;

		#(CLOCK_PERIOD);		
		tag_out[31:0] = tag[31:0];
		#(CLOCK_PERIOD);		
		tag_out[63:32] = tag[63:32];
		#(CLOCK_PERIOD);		
		tag_out[95:64] = tag[95:64];
		#(CLOCK_PERIOD);		
		tag_out[127:96] = tag[127:96];

		if (tag_out == TAG) begin
			$display("tag = %16h\tMATCH",tag_out);
		end else begin
			$display("tag = %16h\tFAIL",tag_out);
		end
	end
endtask

task ABSORB_MESSAGE;
	input reg [127:0] in;
	input reg [31:0] position;
	begin
		#(CLOCK_PERIOD);		
		data_length = MESSAGE_LENGTH;
		#(CLOCK_PERIOD);		
		data_position = position;

		#(CLOCK_PERIOD);		
		data_in [95:64] = in[95:64];
		#(CLOCK_PERIOD);		
		data_in [127:96] = in[127:96];

		#(CLOCK_PERIOD);		
		process_en_AD_AM = 1;

		wait  (done == 1);
		#(CLOCK_PERIOD);		
		process_en_AD_AM = 0;
	end
endtask

task HASH256;
	begin

		process_en_init = 0;
		process_en_AD_AM = 0;
		process_en_encrypt_decrypt = 0;
		process_en_hash = 1;
		process_en_final = 0;

		#(CLOCK_PERIOD);		
		process_en_hash = 1;

		wait  (done == 1);
		#(CLOCK_PERIOD); 		
		process_en_hash = 0;

		#(CLOCK_PERIOD*4);
		if (data_out == HASH_OUT[0]) begin
			$display("data_out = %16h\tMATCH",data_out);
		end else begin
			$display("data_out = %16h\tFAIL",data_out);
		end

		#(CLOCK_PERIOD);		
		process_en_hash = 1;

		wait  (done == 1);
		#(CLOCK_PERIOD); 		
		process_en_hash = 0;
		
		#(CLOCK_PERIOD*4);
		if (data_out == HASH_OUT[1]) begin
			$display("data_out = %16h\tMATCH",data_out);
		end else begin
			$display("data_out = %16h\tFAIL",data_out);
		end

		#(CLOCK_PERIOD);		
		process_en_hash = 1;

		wait  (done == 1);
		#(CLOCK_PERIOD); 		
		process_en_hash = 0;
		
		#(CLOCK_PERIOD*4);
		if (data_out == HASH_OUT[2]) begin
			$display("data_out = %16h\tMATCH",data_out);
		end else begin
			$display("data_out = %16h\tFAIL",data_out);
		end

		#(CLOCK_PERIOD);		
		process_en_hash = 1;

		wait  (done == 1);
		#(CLOCK_PERIOD); 		
		process_en_hash = 0;
		
		#(CLOCK_PERIOD*4);
		if (data_out == HASH_OUT[3]) begin
			$display("data_out = %16h\tMATCH",data_out);
		end else begin
			$display("data_out = %16h\tFAIL",data_out);
		end
	end
endtask

initial begin
	clk = 1;
	rst_n = 1;
	#10 rst_n = 0;
	#10 rst_n = 1;

	key = KEY;
	nonce = NONCE;
	sel_type = 0;

	mode_sel_encrypt_decrypt = 0;

	data_length = 0;
	data_position = 0;

	data_in = 0;

	process_en_init = 0;
	process_en_AD_AM = 0;
	process_en_encrypt_decrypt = 0;
	process_en_hash = 0;
	process_en_final = 0;
end

initial begin
	//==============variable==============
	real encrypt_cycle_use;
	real decrypt_cycle_use;
	real hash_cycle_use;
	longint start_time, end_time;

//START
	#20;
//ENCRYPT
	#(CLOCK_PERIOD);

	$display("===ENCRYPT TEST START===");
	start_time = $time();

	//initialization
	INITIALIZATION(2'b00);

	//process associated data
	foreach (ASS_DATA[i]) begin
		ASSOCIATED_DATA (ASS_DATA[i], 16 * i);
	end
	if ((ASS_DATA_LENGTH % 16) == 0) ASSOCIATED_DATA (128'b0, ASS_DATA_LENGTH);

	//process plaintext
	foreach (PLAINTEXT[i]) begin
		ENCRYPT (PLAINTEXT[i], 16 * i);
		if (data_out == CIPHERTEXT[i]) begin
			$display("data_out = %16h\tMATCH",data_out);
		end else begin
			$display("data_out = %16h\tFAIL",data_out);
		end
	end
	if ((PLAINTEXT_LENGTH % 16) == 0) ENCRYPT (128'b0, PLAINTEXT_LENGTH);

	//finalization
	FINALIZATION();

	//finish
	process_en_init = 0;
	process_en_AD_AM = 0;
	process_en_encrypt_decrypt = 0;
	process_en_hash = 0;
	process_en_final = 0;

	end_time = $time();
	encrypt_cycle_use = (end_time - start_time) / CLOCK_PERIOD;
	$display("===ENCRYPT TEST END  ===");

	#200;

//DECRYPT
	$display("===DECRYPT TEST START===");
	#100;
	start_time = $time();
	
	//initialization
	INITIALIZATION(2'b00);

	//process associated data
	foreach (ASS_DATA[i]) begin
		ASSOCIATED_DATA (ASS_DATA[i], 16 * i);
	end
	if ((ASS_DATA_LENGTH % 16) == 0) ASSOCIATED_DATA (128'b0, ASS_DATA_LENGTH);

	//process ciphertext
	foreach (CIPHERTEXT[i]) begin
		DECRYPT (CIPHERTEXT[i], 16 * i);
		if (data_out == PLAINTEXT[i]) begin
			$display("data_out = %16h\tMATCH",data_out);
		end else begin
			$display("data_out = %16h\tFAIL",data_out);
		end
	end
	if ((CIPHERTEXT_LENGTH % 16) == 0) DECRYPT (128'b0, CIPHERTEXT_LENGTH);

	//finalization
	FINALIZATION();

	//finish
	process_en_init = 0;
	process_en_AD_AM = 0;
	process_en_encrypt_decrypt = 0;
	process_en_hash = 0;
	process_en_final = 0;

	end_time = $time();
	decrypt_cycle_use = (end_time - start_time) / CLOCK_PERIOD;
	$display("===DECRYPT TEST END  ===");
	
	#200;

//HASH
	$display("===HASH256 TEST START===");
	start_time = $time();

	//initialize
	INITIALIZATION(2'b01);

	//absorb message
	foreach (MESSAGE[i]) begin
		ABSORB_MESSAGE (MESSAGE[i], 8 * i);
	end
	if ((MESSAGE_LENGTH % 8) == 0) ABSORB_MESSAGE (128'b0, MESSAGE_LENGTH);

	//hashing
	HASH256 ();

	process_en_init = 0;
	process_en_AD_AM = 0;
	process_en_encrypt_decrypt = 0;
	process_en_hash = 0;
	process_en_final = 0;

	end_time = $time();
	hash_cycle_use = (end_time - start_time) / CLOCK_PERIOD;
	$display("===HASH256 TEST END  ===");


	#1000;

	$display("data length: %8d, associated data: %8d, encrypt cycle use: %.1f, speed: %.4f cycles/byte",PLAINTEXT_LENGTH, ASS_DATA_LENGTH, encrypt_cycle_use, encrypt_cycle_use / (PLAINTEXT_LENGTH + ASS_DATA_LENGTH));
	$display("data length: %8d, associated data: %8d, decrypt cycle use: %.1f, speed: %.4f cycles/byte",CIPHERTEXT_LENGTH, ASS_DATA_LENGTH, decrypt_cycle_use, decrypt_cycle_use / (CIPHERTEXT_LENGTH + ASS_DATA_LENGTH));
	$display("message length: %8d, hash cycle use: %.1f, speed: %.4f cycles/byte", MESSAGE_LENGTH, hash_cycle_use, hash_cycle_use / (MESSAGE_LENGTH));

	$finish;
end

initial begin
	$dumpfile("wave.vcd");
	$dumpvars;
	
end

endmodule : test_ascon_core
module ascon_core (
	input wire clk,
	input wire rst_n,
	
	input wire [127:0] key,
	input wire [127:0] nonce,

	input wire [1:0] sel_type,
	input wire mode_sel_encrypt_decrypt,

	input wire [31:0] data_length,
	input wire [31:0] data_position,

	input wire [127:0] data_in,
	output wire [127:0] data_out,

	input wire process_en_init,
	input wire process_en_AE_AM,
	input wire process_en_encrypt_decrypt,
	input wire process_en_hash,
	input wire process_en_final,

	output wire [127:0] tag
);

reg [63:0] x0, x1, x2, x3, x4;
reg count;

wire process_err_AE_AM, process_err_plaintext_ciphertext;


wire [63:0] x0_init, x1_init, x2_init, x3_init, x4_init;
wire [63:0] x0_i_AE_AM, x1_i_AE_AM, x2_i_AE_AM, x3_i_AE_AM, x4_i_AE_AM, x0_o_AE_AM, x1_o_AE_AM, x2_o_AE_AM, x3_o_AE_AM, x4_o_AE_AM;
wire [63:0] x0_i_encrypt_decrypt, x1_i_encrypt_decrypt, x2_i_encrypt_decrypt, x3_i_encrypt_decrypt, x4_i_encrypt_decrypt, x0_o_encrypt_decrypt, x1_o_encrypt_decrypt, x2_o_encrypt_decrypt, x3_o_encrypt_decrypt, x4_o_encrypt_decrypt;
wire [63:0] x0_i_final, x1_i_final, x2_i_final, x3_i_final, x4_i_final;
wire [63:0] x0_i_hash, x1_i_hash, x2_i_hash, x3_i_hash, x4_i_hash, x0_o_hash, x1_o_hash, x2_o_hash, x3_o_hash, x4_o_hash;

wire [127:0] encrypt_decrypt_out;
wire [63:0] hash_out;

assign data_out = 	(process_en_encrypt_decrypt) ? encrypt_decrypt_out :
		(process_en_hash) ? hash_out : 128'b0;

always @(posedge clk or negedge rst_n) begin
	if(~rst_n) begin
		x0 <= 64'b0;
		x1 <= 64'b0;
		x2 <= 64'b0;
		x3 <= 64'b0;
		x4 <= 64'b0;
		count <= 2'b0;
	end else begin
		if (process_en_init) begin
			x0 <= x0_init;
			x1 <= x1_init;
			x2 <= x2_init;
			x3 <= x3_init;
			x4 <= x4_init;
		end else begin
			if (process_en_AE_AM) begin
				count <= count + 2'b1;
				if (count == 2'b1) begin
					x0 <= x0_o_AE_AM;
					x1 <= x1_o_AE_AM;
					x2 <= x2_o_AE_AM;
					x3 <= x3_o_AE_AM;
					x4 <= x4_o_AE_AM;
					count <= 0;
				end
			end else begin
				if (process_en_encrypt_decrypt) begin
					count <= count + 2'b1;
					if (count == 2'b1) begin
						x0 <= x0_o_encrypt_decrypt;
						x1 <= x1_o_encrypt_decrypt;
						x2 <= x2_o_encrypt_decrypt;
						x3 <= x3_o_encrypt_decrypt;
						x4 <= x4_o_encrypt_decrypt;
						count <= 0;
					end
				end else begin
					if (process_en_hash) begin
						count <= count + 2'b1;
						if (count == 2'b1) begin
							x0 <= x0_o_hash;
							x1 <= x1_o_hash;
							x2 <= x2_o_hash;
							x3 <= x3_o_hash;
							x4 <= x4_o_hash;
							count <= 0;
						end
					end	
				end
			end
		end
	end
end

ascon_initialization ascon_initialization_module(
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

assign x0_i_AE_AM = (process_en_AE_AM) ? x0 : 64'b0;
assign x1_i_AE_AM = (process_en_AE_AM) ? x1 : 64'b0;
assign x2_i_AE_AM = (process_en_AE_AM) ? x2 : 64'b0;
assign x3_i_AE_AM = (process_en_AE_AM) ? x3 : 64'b0;
assign x4_i_AE_AM = (process_en_AE_AM) ? x4 : 64'b0;

ascon_AE_AM ascon_process_associated_data_module(
	.clk(clk), .rst_n(rst_n),

	.process_en(process_en_AE_AM),
	.sel_type(sel_type),

	.data_length(data_length),
	.data_position(data_position),

	.data(data_in),

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

assign x0_i_encrypt_decrypt = (process_en_encrypt_decrypt) ? x0 : 64'b0;
assign x1_i_encrypt_decrypt = (process_en_encrypt_decrypt) ? x1 : 64'b0;
assign x2_i_encrypt_decrypt = (process_en_encrypt_decrypt) ? x2 : 64'b0;
assign x3_i_encrypt_decrypt = (process_en_encrypt_decrypt) ? x3 : 64'b0;
assign x4_i_encrypt_decrypt = (process_en_encrypt_decrypt) ? x4 : 64'b0;

ascon_encrypt_decrypt ascon_encrypt_decrypt_module(
	.clk(clk), .rst_n(rst_n),

	.process_en(process_en_encrypt_decrypt),
	.process_mode_sel(mode_sel_encrypt_decrypt),

	.text_length(data_length),
	.text_position(data_position),

	.data_in(data_in),

	.x0_i(x0_i_encrypt_decrypt),
	.x1_i(x1_i_encrypt_decrypt),
	.x2_i(x2_i_encrypt_decrypt),
	.x3_i(x3_i_encrypt_decrypt),
	.x4_i(x4_i_encrypt_decrypt),

	.data_out(encrypt_decrypt_out),

	.x0_o(x0_o_encrypt_decrypt),
	.x1_o(x1_o_encrypt_decrypt),
	.x2_o(x2_o_encrypt_decrypt),
	.x3_o(x3_o_encrypt_decrypt),
	.x4_o(x4_o_encrypt_decrypt),

	.process_err(process_err_plaintext_ciphertext)
);

assign x0_i_final = (process_en_final) ? x0 : 64'b0;
assign x1_i_final = (process_en_final) ? x1 : 64'b0;
assign x2_i_final = (process_en_final) ? x2 : 64'b0;
assign x3_i_final = (process_en_final) ? x3 : 64'b0;
assign x4_i_final = (process_en_final) ? x4 : 64'b0;

ascon_finalization ascon_finalization_module(
	.clk(clk), .rst_n(rst_n),

	.key(key),

	.x0_i(x0_i_final),
	.x1_i(x1_i_final),
	.x2_i(x2_i_final),
	.x3_i(x3_i_final),
	.x4_i(x4_i_final),

	.tag(tag)
);

assign x0_i_hash = (process_en_hash) ? x0 : 64'b0;
assign x1_i_hash = (process_en_hash) ? x1 : 64'b0;
assign x2_i_hash = (process_en_hash) ? x2 : 64'b0;
assign x3_i_hash = (process_en_hash) ? x3 : 64'b0;
assign x4_i_hash = (process_en_hash) ? x4 : 64'b0;

ascon_hash ascon_hash_module(
	.clk(clk),
	.rst_n(rst_n),

	.process_en(process_en_hash),
	
	.x0_i(x0_i_hash),
	.x1_i(x1_i_hash),
	.x2_i(x2_i_hash),
	.x3_i(x3_i_hash),
	.x4_i(x4_i_hash),

	.x0_o(x0_o_hash),
	.x1_o(x1_o_hash),
	.x2_o(x2_o_hash),
	.x3_o(x3_o_hash),
	.x4_o(x4_o_hash),

	.hash_out(hash_out)
);

endmodule : ascon_core
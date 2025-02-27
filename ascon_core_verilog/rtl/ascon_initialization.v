`timescale 1ns/1ps
module ascon_initialization (
	input wire clk, rst_n,
	input wire [1:0] sel_type,
	input wire [127:0] key,
	input wire [127:0] nonce,

	output wire [63:0] x0,
	output wire [63:0] x1,
	output wire [63:0] x2,
	output wire [63:0] x3,
	output wire [63:0] x4,

	output wire [63:0] x0_i_init_p12,
	output wire [63:0] x1_i_init_p12,
	output wire [63:0] x2_i_init_p12,
	output wire [63:0] x3_i_init_p12,
	output wire [63:0] x4_i_init_p12,

	input  wire [63:0] x0_o_init_p12,
	input  wire [63:0] x1_o_init_p12,
	input  wire [63:0] x2_o_init_p12,
	input  wire [63:0] x3_o_init_p12,
	input  wire [63:0] x4_o_init_p12
);
parameter AEAD128 = 2'b00;
parameter Hash256 = 2'b01;
parameter XOF128  = 2'b10;
parameter CXOF128 = 2'b11;

reg [63:0] IV;

always @(posedge clk or negedge rst_n) begin
	if (~rst_n) begin
		IV <= 64'h0;
	end
	else begin
		case (sel_type)
			AEAD128: IV <= 64'h00001000808c0001;
			Hash256: IV <= 64'h0000080100cc0002;
			XOF128 : IV <= 64'h0000080000cc0003;
			CXOF128: IV <= 64'h0000080000cc0004;
			default: ;
		endcase
	end
end

wire [63:0] S [4:0];

wire [127:0] key_in;
assign key_in = (sel_type == AEAD128) ? key :
				(sel_type == Hash256) ? 128'b0 :
				(sel_type == XOF128 ) ? 128'b0 :
				(sel_type == CXOF128) ? 128'b0 : 128'b0;

wire [127:0] nonce_in;
assign nonce_in = (sel_type == AEAD128) ? nonce :
				(sel_type == Hash256) ? 128'b0 :
				(sel_type == XOF128 ) ? 128'b0 :
				(sel_type == CXOF128) ? 128'b0 : 128'b0;

assign x0_i_init_p12 = IV;
assign x1_i_init_p12 = key_in[127:64];
assign x2_i_init_p12 = key_in[63:0];
assign x3_i_init_p12 = nonce_in[127:64];
assign x4_i_init_p12 = nonce_in[63:0];

assign S[0] = x0_o_init_p12;
assign S[1] = x1_o_init_p12;
assign S[2] = x2_o_init_p12;
assign S[3] = x3_o_init_p12;
assign S[4] = x4_o_init_p12;

// ascon_permutation_p12 ascon_p12(
// 	.x0_i(IV),
// 	.x1_i(key_in[127:64]),
// 	.x2_i(key_in[63:0]),
// 	.x3_i(nonce_in[127:64]),
// 	.x4_i(nonce_in[63:0]),

// 	.x0_o(S[0]),
// 	.x1_o(S[1]),
// 	.x2_o(S[2]),
// 	.x3_o(S[3]),
// 	.x4_o(S[4])
// );

reg [319:0] zeros_key;
always @(posedge clk or negedge rst_n) begin
	if(~rst_n) begin
		zeros_key <= 320'h0;
	end else begin
		case (sel_type)
			AEAD128: zeros_key[127:0] <= key;
			Hash256: zeros_key[127:0] <= 128'h0;
			XOF128 : zeros_key[127:0] <= 128'h0;
			CXOF128: zeros_key[127:0] <= 128'h0;
			default: ;
		endcase	
	end
end
// assign zeros_K = {192'b0,key};

assign  x0 = S[0] ^ zeros_key[319:256];
assign  x1 = S[1] ^ zeros_key[255:192];
assign  x2 = S[2] ^ zeros_key[191:128];
assign  x3 = S[3] ^ zeros_key[127:64];
assign  x4 = S[4] ^ zeros_key[63:0];

endmodule
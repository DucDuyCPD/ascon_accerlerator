`timescale  1ns/1ps
module ascon_initialization (
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

wire [63:0] IV;
wire [63:0] S [4:0];

wire [127:0] key_in;
wire [127:0] nonce_in;
wire [127:0] zeros_key;

assign IV = 	(sel_type == AEAD128) ? 64'h00001000808c0001 : 
		(sel_type == Hash256) ? 64'h0000080100cc0002 :
		(sel_type == XOF128 ) ? 64'h0000080000cc0003 : 64'h0000080000cc0004;

assign key_in = 	(sel_type == AEAD128) ? key :
		(sel_type == Hash256) ? 128'b0 :
		(sel_type == XOF128 ) ? 128'b0 :
		(sel_type == CXOF128) ? 128'b0 : 128'b0;

assign nonce_in = 	(sel_type == AEAD128) ? nonce :
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

assign zeros_key = (sel_type == AEAD128) ? key : 128'b0;

assign  x0 = S[0];
assign  x1 = S[1];
assign  x2 = S[2];
assign  x3 = S[3] ^ zeros_key[127:64];
assign  x4 = S[4] ^ zeros_key[63:0];

endmodule
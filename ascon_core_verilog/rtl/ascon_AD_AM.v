`timescale  1ns/1ps
module ascon_AD_AM ( //ascon's associated data and absorb message
	input wire clk, rst_n,

	input wire process_en,

	input wire [1:0] sel_type,

	input wire [31:0] data_length,
	input wire [31:0] data_position,

	input wire [127:0] data,

	input wire [63:0] x0_i,
	input wire [63:0] x1_i,
	input wire [63:0] x2_i,
	input wire [63:0] x3_i,
	input wire [63:0] x4_i,

	output reg [63:0] x0_o,
	output reg [63:0] x1_o,
	output reg [63:0] x2_o,
	output reg [63:0] x3_o,
	output reg [63:0] x4_o,

	output wire [63:0] x0_i_AD_AM_p8,
	output wire [63:0] x1_i_AD_AM_p8,
	output wire [63:0] x2_i_AD_AM_p8,
	output wire [63:0] x3_i_AD_AM_p8,
	output wire [63:0] x4_i_AD_AM_p8,

	input  wire [63:0] x0_o_AD_AM_p8,
	input  wire [63:0] x1_o_AD_AM_p8,
	input  wire [63:0] x2_o_AD_AM_p8,
	input  wire [63:0] x3_o_AD_AM_p8,
	input  wire [63:0] x4_o_AD_AM_p8,

	output wire [63:0] x0_i_AD_AM_p12,
	output wire [63:0] x1_i_AD_AM_p12,
	output wire [63:0] x2_i_AD_AM_p12,
	output wire [63:0] x3_i_AD_AM_p12,
	output wire [63:0] x4_i_AD_AM_p12,

	input  wire [63:0] x0_o_AD_AM_p12,
	input  wire [63:0] x1_o_AD_AM_p12,
	input  wire [63:0] x2_o_AD_AM_p12,
	input  wire [63:0] x3_o_AD_AM_p12,
	input  wire [63:0] x4_o_AD_AM_p12
);
parameter AEAD128 = 2'b00;
parameter Hash256 = 2'b01;
parameter XOF128  = 2'b10;
parameter CXOF128 = 2'b11;

wire [63:0] x0_p8, x1_p8, x2_p8, x3_p8, x4_p8;
wire [63:0] x0_p12, x1_p12, x2_p12, x3_p12, x4_p12;

wire [63:0] s0, s1, s2, s3, s4; 

always @(posedge clk or negedge rst_n)begin
	if (~rst_n) begin
		x0_o <= 64'b0;
		x1_o <= 64'b0;
		x2_o <= 64'b0;
		x3_o <= 64'b0;
		x4_o <= 64'b0;
	end
	else begin
		if (process_en) begin
			if (sel_type == AEAD128) begin
				if ((data_length - data_position) >= 16) begin
					x0_o <= x0_p8;
					x1_o <= x1_p8;
					x2_o <= x2_p8;
					x3_o <= x3_p8;
					x4_o <= x4_p8;
				end
				else begin
					x0_o <= x0_p8;
					x1_o <= x1_p8;
					x2_o <= x2_p8;
					x3_o <= x3_p8;
					x4_o <= x4_p8 ^ 64'h80_00_00_00_00_00_00_00;
				end
			end
			else begin
				if ((data_length - data_position) >= 8) begin
					x0_o <= x0_p12;
					x1_o <= x1_p12;
					x2_o <= x2_p12;
					x3_o <= x3_p12;
					x4_o <= x4_p12;
				end
				else begin
					x0_o <= s0;
					x1_o <= x1_i;
					x2_o <= x2_i;
					x3_o <= x3_i;
					x4_o <= x4_i;
				end
			end
		end
	end
end

// assign s0 = ((data_length - data_position) > 8) && ((sel_type == Hash256) || (sel_type == XOF128) || (sel_type == CXOF128)) ? x0_i ^ data[127:64] :
// 			((data_length - data_position) == 0 ) ? x0_i ^  64'h00_00_00_00_00_00_00_01 :
// 			((data_length - data_position) == 1 ) ? x0_i ^ {56'h00_00_00_00_00_00_01,data[71:64] } :
// 			((data_length - data_position) == 2 ) ? x0_i ^ {48'h00_00_00_00_00_01,data[79:64]} :
// 			((data_length - data_position) == 3 ) ? x0_i ^ {40'h00_00_00_00_01,data[87:64]} :
// 			((data_length - data_position) == 4 ) ? x0_i ^ {32'h00_00_00_01,data[95:64]} :
// 			((data_length - data_position) == 5 ) ? x0_i ^ {24'h00_00_01,data[103:64]} :
// 			((data_length - data_position) == 6 ) ? x0_i ^ {16'h00_01,data[111:64]} :
// 			((data_length - data_position) == 7 ) ? x0_i ^ {8'h01,data[119:64]} :
// 			((data_length - data_position) == 8 ) && (sel_type == AEAD128) ? x0_i ^ data[127:64] : 
// 			((data_length - data_position) == 9 ) && (sel_type == AEAD128) ? x0_i ^ data[127:64] :
// 			((data_length - data_position) == 10) && (sel_type == AEAD128) ? x0_i ^ data[127:64] :
// 			((data_length - data_position) == 11) && (sel_type == AEAD128) ? x0_i ^ data[127:64] :
// 			((data_length - data_position) == 12) && (sel_type == AEAD128) ? x0_i ^ data[127:64] :
// 			((data_length - data_position) == 13) && (sel_type == AEAD128) ? x0_i ^ data[127:64] :
// 			((data_length - data_position) == 14) && (sel_type == AEAD128) ? x0_i ^ data[127:64] :
// 			((data_length - data_position) == 15) && (sel_type == AEAD128) ? x0_i ^ data[127:64] : x0_i ^ data[127:64];

assign s0 =		((data_length - data_position) == 0 ) ? x0_i ^  64'h1 :
			((data_length - data_position) == 1 ) ? x0_i ^ {56'h1,data[71:64]} :
			((data_length - data_position) == 2 ) ? x0_i ^ {48'h1,data[79:64]} :
			((data_length - data_position) == 3 ) ? x0_i ^ {40'h1,data[87:64]} :
			((data_length - data_position) == 4 ) ? x0_i ^ {32'h1,data[95:64]} :
			((data_length - data_position) == 5 ) ? x0_i ^ {24'h1,data[103:64]} :
			((data_length - data_position) == 6 ) ? x0_i ^ {16'h1,data[111:64]} :
			((data_length - data_position) == 7 ) ? x0_i ^ { 8'h1,data[119:64]} : x0_i ^ data[127:64];

// assign s1 = ((sel_type == Hash256) || (sel_type == XOF128) || (sel_type == CXOF128)) ? x1_i : 
// 			((data_length - data_position) == 0 ) && (sel_type == AEAD128) ? x1_i ^ 64'b0 :
// 			((data_length - data_position) == 1 ) && (sel_type == AEAD128) ? x1_i ^ 64'b0 :
// 			((data_length - data_position) == 2 ) && (sel_type == AEAD128) ? x1_i ^ 64'b0 :
// 			((data_length - data_position) == 3 ) && (sel_type == AEAD128) ? x1_i ^ 64'b0 :
// 			((data_length - data_position) == 4 ) && (sel_type == AEAD128) ? x1_i ^ 64'b0 :
// 			((data_length - data_position) == 5 ) && (sel_type == AEAD128) ? x1_i ^ 64'b0 :
// 			((data_length - data_position) == 6 ) && (sel_type == AEAD128) ? x1_i ^ 64'b0 :
// 			((data_length - data_position) == 7 ) && (sel_type == AEAD128) ? x1_i ^ 64'b0 :
// 			((data_length - data_position) == 8 ) && (sel_type == AEAD128) ? x1_i ^ 64'h00_00_00_00_00_00_00_01:
// 			((data_length - data_position) == 9 ) && (sel_type == AEAD128) ? x1_i ^ {56'h00_00_00_00_00_00_01,data[7:0] } :
// 			((data_length - data_position) == 10) && (sel_type == AEAD128) ? x1_i ^ {48'h00_00_00_00_00_01,data[15:0]} :
// 			((data_length - data_position) == 11) && (sel_type == AEAD128) ? x1_i ^ {40'h00_00_00_00_01,data[23:0]} :
// 			((data_length - data_position) == 12) && (sel_type == AEAD128) ? x1_i ^ {32'h00_00_00_01,data[31:0]} :
// 			((data_length - data_position) == 13) && (sel_type == AEAD128) ? x1_i ^ {24'h00_00_01,data[39:0]} :
// 			((data_length - data_position) == 14) && (sel_type == AEAD128) ? x1_i ^ {16'h00_01,data[47:0]} :
// 			((data_length - data_position) == 15) && (sel_type == AEAD128) ? x1_i ^ {8'h01,data[55:0]} : x1_i ^ data[63:0];

assign s1 = ((sel_type == Hash256) || (sel_type == XOF128) || (sel_type == CXOF128)) ? x1_i : 
			((data_length - data_position) == 0 ) ? x1_i :
			((data_length - data_position) == 1 ) ? x1_i :
			((data_length - data_position) == 2 ) ? x1_i :
			((data_length - data_position) == 3 ) ? x1_i :
			((data_length - data_position) == 4 ) ? x1_i :
			((data_length - data_position) == 5 ) ? x1_i :
			((data_length - data_position) == 6 ) ? x1_i :
			((data_length - data_position) == 7 ) ? x1_i :
			((data_length - data_position) == 8 ) ? x1_i ^  64'h1:
			((data_length - data_position) == 9 ) ? x1_i ^ {56'h1,data[7:0] } :
			((data_length - data_position) == 10) ? x1_i ^ {48'h1,data[15:0]} :
			((data_length - data_position) == 11) ? x1_i ^ {40'h1,data[23:0]} :
			((data_length - data_position) == 12) ? x1_i ^ {32'h1,data[31:0]} :
			((data_length - data_position) == 13) ? x1_i ^ {24'h1,data[39:0]} :
			((data_length - data_position) == 14) ? x1_i ^ {16'h1,data[47:0]} :
			((data_length - data_position) == 15) ? x1_i ^ { 8'h1,data[55:0]} : x1_i ^ data[63:0];

assign s2 = x2_i;
assign s3 = x3_i;
assign s4 = x4_i;

assign x0_i_AD_AM_p8 = s0;
assign x1_i_AD_AM_p8 = s1;
assign x2_i_AD_AM_p8 = s2;
assign x3_i_AD_AM_p8 = s3;
assign x4_i_AD_AM_p8 = s4;

assign x0_p8 = x0_o_AD_AM_p8;
assign x1_p8 = x1_o_AD_AM_p8;
assign x2_p8 = x2_o_AD_AM_p8;
assign x3_p8 = x3_o_AD_AM_p8;
assign x4_p8 = x4_o_AD_AM_p8;

assign x0_i_AD_AM_p12 = s0;
assign x1_i_AD_AM_p12 = s1;
assign x2_i_AD_AM_p12 = s2;
assign x3_i_AD_AM_p12 = s3;
assign x4_i_AD_AM_p12 = s4;

assign x0_p12 = x0_o_AD_AM_p12;
assign x1_p12 = x1_o_AD_AM_p12;
assign x2_p12 = x2_o_AD_AM_p12;
assign x3_p12 = x3_o_AD_AM_p12;
assign x4_p12 = x4_o_AD_AM_p12;


// ascon_permutation_p8 ascon_p8(
// 	.x0_i(s0),
// 	.x1_i(s1),
// 	.x2_i(s2),
// 	.x3_i(s3),
// 	.x4_i(s4),

// 	.x0_o(x0_p8),
// 	.x1_o(x1_p8),
// 	.x2_o(x2_p8),
// 	.x3_o(x3_p8),
// 	.x4_o(x4_p8)
// );

// ascon_permutation_p12 ascon_p12(
// 	.x0_i(s0),
// 	.x1_i(s1),
// 	.x2_i(s2),
// 	.x3_i(s3),
// 	.x4_i(s4),

// 	.x0_o(x0_p12),
// 	.x1_o(x1_p12),
// 	.x2_o(x2_p12),
// 	.x3_o(x3_p12),
// 	.x4_o(x4_p12)
// );

endmodule
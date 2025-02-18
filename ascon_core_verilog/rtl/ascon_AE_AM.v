module ascon_AE_AM ( //ascon's associated data and absorb message
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

	output wire process_err
);
parameter AEAD128 = 2'b00;
parameter Hash256 = 2'b01;
parameter XOF128  = 2'b10;
parameter CXOF128 = 2'b11;

wire [63:0] x0_p8, x1_p8, x2_p8, x3_p8, x4_p8;
wire [63:0] x0_p12, x1_p12, x2_p12, x3_p12, x4_p12;

wire [63:0] s0, s1, s2, s3, s4; 

assign process_err = (data_position > data_length) ? 1'b1 : 1'b0;

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
				if ((data_length - data_position) > 16) begin
					x0_o <= x0_p8;
					x1_o <= x1_p8;
					x2_o <= x2_p8;
					x3_o <= x3_p8;
					x4_o <= x4_p8;
				end
				else begin
					x0_o <= x0_p8 ^ 64'b0;
					x1_o <= x1_p8 ^ 64'b0;
					x2_o <= x2_p8 ^ 64'b0;
					x3_o <= x3_p8 ^ 64'b0;
					x4_o <= x4_p8 ^ 64'h80_00_00_00_00_00_00_00;
				end
			end
			else begin
				x0_o <= x0_p12;
				x1_o <= x1_p12;
				x2_o <= x2_p12;
				x3_o <= x3_p12;
				x4_o <= x4_p12;
			end
		end
	end
end

assign s0 = ((data_length - data_position) > 16) && (sel_type == AEAD128) ? x0_i ^ data[127:64] :
			((data_length - data_position) > 8) && ((sel_type == Hash256) || (sel_type == XOF128) || (sel_type == CXOF128)) ? x0_i ^ data[63:0] :
			((data_length - data_position) == 0 ) ? x0_i ^ 64'h00_00_00_00_00_00_00_01:
			((data_length - data_position) == 1 ) ? x0_i ^ {56'h00_00_00_00_00_00_01,data[7:0] } :
			((data_length - data_position) == 2 ) ? x0_i ^ {48'h00_00_00_00_00_01,data[15:0]} :
			((data_length - data_position) == 3 ) ? x0_i ^ {40'h00_00_00_00_01,data[23:0]} :
			((data_length - data_position) == 4 ) ? x0_i ^ {32'h00_00_00_01,data[31:0]} :
			((data_length - data_position) == 5 ) ? x0_i ^ {24'h00_00_01,data[39:0]} :
			((data_length - data_position) == 6 ) ? x0_i ^ {16'h00_01,data[47:0]} :
			((data_length - data_position) == 7 ) ? x0_i ^ {8'h01,data[55:0]} :
			((data_length - data_position) == 8 ) ? x0_i ^ data[63:0] : 
			((data_length - data_position) == 9 ) && (sel_type == AEAD128) ? x0_i ^ data[71:8] :
			((data_length - data_position) == 10) && (sel_type == AEAD128) ? x0_i ^ data[79:16] :
			((data_length - data_position) == 11) && (sel_type == AEAD128) ? x0_i ^ data[87:24] :
			((data_length - data_position) == 12) && (sel_type == AEAD128) ? x0_i ^ data[95:32] :
			((data_length - data_position) == 13) && (sel_type == AEAD128) ? x0_i ^ data[103:40] :
			((data_length - data_position) == 14) && (sel_type == AEAD128) ? x0_i ^ data[111:48] :
			((data_length - data_position) == 15) && (sel_type == AEAD128) ? x0_i ^ data[119:56] :
			((data_length - data_position) == 16) && (sel_type == AEAD128) ? x0_i ^ data[127:64] : x0_i ^ data[127:64];

assign s1 = (sel_type == Hash256) || (sel_type == XOF128) || (sel_type == CXOF128) ? x1_i : 
			((data_length - data_position) >  16) && (sel_type == AEAD128) ? x1_i ^ data[64:0] : 
			((data_length - data_position) == 0 ) && (sel_type == AEAD128) ? x1_i ^ 64'b0 :
			((data_length - data_position) == 1 ) && (sel_type == AEAD128) ? x1_i ^ 64'b0 :
			((data_length - data_position) == 2 ) && (sel_type == AEAD128) ? x1_i ^ 64'b0 :
			((data_length - data_position) == 3 ) && (sel_type == AEAD128) ? x1_i ^ 64'b0 :
			((data_length - data_position) == 4 ) && (sel_type == AEAD128) ? x1_i ^ 64'b0 :
			((data_length - data_position) == 5 ) && (sel_type == AEAD128) ? x1_i ^ 64'b0 :
			((data_length - data_position) == 6 ) && (sel_type == AEAD128) ? x1_i ^ 64'b0 :
			((data_length - data_position) == 7 ) && (sel_type == AEAD128) ? x1_i ^ 64'b0 :
			((data_length - data_position) == 8 ) && (sel_type == AEAD128) ? x1_i ^ 64'h00_00_00_00_00_00_00_01:
			((data_length - data_position) == 9 ) && (sel_type == AEAD128) ? x1_i ^ {56'h00_00_00_00_00_00_01,data[7:0] } :
			((data_length - data_position) == 10) && (sel_type == AEAD128) ? x1_i ^ {48'h00_00_00_00_00_01,data[15:0]} :
			((data_length - data_position) == 11) && (sel_type == AEAD128) ? x1_i ^ {40'h00_00_00_00_01,data[23:0]} :
			((data_length - data_position) == 12) && (sel_type == AEAD128) ? x1_i ^ {32'h00_00_00_01,data[31:0]} :
			((data_length - data_position) == 13) && (sel_type == AEAD128) ? x1_i ^ {24'h00_00_01,data[39:0]} :
			((data_length - data_position) == 14) && (sel_type == AEAD128) ? x1_i ^ {16'h00_01,data[47:0]} :
			((data_length - data_position) == 15) && (sel_type == AEAD128) ? x1_i ^ {8'h01,data[55:0]} :
			((data_length - data_position) == 16) && (sel_type == AEAD128) ? x1_i ^ data[63:0] : x1_i[63:0] ^ data[63:0];

assign s2 = x2_i;
assign s3 = x3_i;
assign s4 = x4_i;

// assign x0_o = (process_en) ? x0 : 64'h0;
// assign x1_o = (process_en) ? x1 : 64'h0;
// assign x2_o = (process_en) ? x2 : 64'h0;
// assign x3_o = (process_en) ? x3 : 64'h0;
// assign x4_o = (process_en) ? x4 : 64'h0;

ascon_permutation_p8 ascon_p8(
	.x0_i(s0),
	.x1_i(s1),
	.x2_i(s2),
	.x3_i(s3),
	.x4_i(s4),

	.x0_o(x0_p8),
	.x1_o(x1_p8),
	.x2_o(x2_p8),
	.x3_o(x3_p8),
	.x4_o(x4_p8)
);

ascon_permutation_p12 ascon_p12(
	.x0_i(s0),
	.x1_i(s1),
	.x2_i(s2),
	.x3_i(s3),
	.x4_i(s4),

	.x0_o(x0_p12),
	.x1_o(x1_p12),
	.x2_o(x2_p12),
	.x3_o(x3_p12),
	.x4_o(x4_p12)
);

endmodule
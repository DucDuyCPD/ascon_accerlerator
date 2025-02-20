module ascon_encrypt_decrypt (
	input wire clk, rst_n,

	input wire process_en,
	input wire process_mode_sel, // 0: encrypt, 1: decrypt

	input wire [31:0] text_length,
	input wire [31:0] text_position,

	input wire [127:0] data_in,

	input wire [63:0] x0_i,
	input wire [63:0] x1_i,
	input wire [63:0] x2_i,
	input wire [63:0] x3_i,
	input wire [63:0] x4_i,

	output reg [127:0] data_out,

	output reg [63:0] x0_o,
	output reg [63:0] x1_o,
	output reg [63:0] x2_o,
	output reg [63:0] x3_o,
	output reg [63:0] x4_o,

	output wire process_err
);

wire [63:0] x0_p8, x1_p8, x2_p8, x3_p8, x4_p8;

wire [63:0] s0, s1, s2, s3, s4; 

wire [127:0] data_out_last;

assign process_err = (text_position > text_length) ? 1'b1 : 1'b0;

always @(posedge clk or negedge rst_n)begin
	if (~rst_n) begin
		x0_o <= 64'b0;
		x1_o <= 64'b0;
		x2_o <= 64'b0;
		x3_o <= 64'b0;
		x4_o <= 64'b0;
		data_out <= 64'b0;
	end
	else begin
		if (process_en) begin
			if (text_length - text_position > 16) begin
				x0_o <= x0_p8;
				x1_o <= x1_p8;
				x2_o <= x2_p8;
				x3_o <= x3_p8;
				x4_o <= x4_p8;
				if (~process_mode_sel) data_out <= {s1,s0};
				else data_out <= {x1_i ^ data_in[127:64], x0_i ^ data_in[63:0]};
			end 
			else begin
				if (~process_mode_sel) begin
					x0_o <= x0_last ^ x0_i;
					x1_o <= x1_last ^ x1_i;
					x2_o <= x2_last;
					x3_o <= x3_last;
					x4_o <= x4_last;
					case (text_length - text_position)
						32'h0 : data_out <= 128'b0;
						32'h1 : data_out <= {120'b0,data_out_last[0:0]};
						32'h2 : data_out <= {112'b0,data_out_last[15:0]};
						32'h3 : data_out <= {104'b0,data_out_last[23:0]};
						32'h4 : data_out <= {96'b0,data_out_last[31:0]};
						32'h5 : data_out <= {88'b0,data_out_last[39:0]};
						32'h6 : data_out <= {80'b0,data_out_last[47:0]};
						32'h7 : data_out <= {72'b0,data_out_last[55:0]};
						32'h8 : data_out <= {64'b0,data_out_last[63:0]};
						32'h9 : data_out <= {56'b0,data_out_last[71:0]};
						32'ha : data_out <= {48'b0,data_out_last[79:0]};
						32'hb : data_out <= {40'b0,data_out_last[87:0]};
						32'hc : data_out <= {32'b0,data_out_last[95:0]};
						32'hd : data_out <= {24'b0,data_out_last[103:0]};
						32'he : data_out <= {16'b0,data_out_last[111:0]};
						32'hf : data_out <= {8'b0,data_out_last[119:0]};
						32'h10: data_out <= data_out_last[127:0];
						default : data_out <= data_out_last;
					endcase
				end
				else begin 
					x0_o <= x0_last;
					x1_o <= x1_last;
					x2_o <= x2_last;
					x3_o <= x3_last;
					x4_o <= x4_last;
					case (text_length - text_position)
						32'h0 : data_out <= 128'b0;
						32'h1 : data_out <= {120'b0,data_out_last[0:0]};
						32'h2 : data_out <= {112'b0,data_out_last[15:0]};
						32'h3 : data_out <= {104'b0,data_out_last[23:0]};
						32'h4 : data_out <= {96'b0,data_out_last[31:0]};
						32'h5 : data_out <= {88'b0,data_out_last[39:0]};
						32'h6 : data_out <= {80'b0,data_out_last[47:0]};
						32'h7 : data_out <= {72'b0,data_out_last[55:0]};
						32'h8 : data_out <= {64'b0,data_out_last[63:0]};
						32'h9 : data_out <= {56'b0,data_out_last[71:0]};
						32'ha : data_out <= {48'b0,data_out_last[79:0]};
						32'hb : data_out <= {40'b0,data_out_last[87:0]};
						32'hc : data_out <= {32'b0,data_out_last[95:0]};
						32'hd : data_out <= {24'b0,data_out_last[103:0]};
						32'he : data_out <= {16'b0,data_out_last[111:0]};
						32'hf : data_out <= {8'b0,data_out_last[119:0]};
						32'h10: data_out <= data_out_last[127:0];
						default : data_out <= data_out_last;
					endcase
				end
			end
		end
	end
end

wire [63:0] x0_last, x1_last, x2_last, x3_last, x4_last;

wire [63:0] x0_last_encrypt, x1_last_encrypt, x0_last_decrypt, x1_last_decrypt;
assign x0_last_encrypt = 	(text_length - text_position == 0 ) ? 64'h00_00_00_00_00_00_00_01:
			(text_length - text_position == 1 ) ? {56'h00_00_00_00_00_00_01,data_in[7:0]}:
			(text_length - text_position == 2 ) ? {48'h00_00_00_00_00_01,data_in[15:0]}:
			(text_length - text_position == 3 ) ? {40'h00_00_00_00_01,data_in[23:0]}:
			(text_length - text_position == 4 ) ? {32'h00_00_00_01,data_in[31:0]}:
			(text_length - text_position == 5 ) ? {24'h00_00_01,data_in[39:0]}:
			(text_length - text_position == 6 ) ? {16'h00_01,data_in[47:0]}:
			(text_length - text_position == 7 ) ? {8'h01,data_in[55:0]}:
			(text_length - text_position == 8 ) ? data_in[63:0]:
			(text_length - text_position == 9 ) ? data_in[71:8]:
			(text_length - text_position == 10) ? data_in[79:16]:
			(text_length - text_position == 11) ? data_in[87:24]:
			(text_length - text_position == 12) ? data_in[95:32]:
			(text_length - text_position == 13) ? data_in[103:40]:
			(text_length - text_position == 14) ? data_in[111:48]:
			(text_length - text_position == 15) ? data_in[119:56]:
			(text_length - text_position == 16) ? data_in[127:64]: data_in[127:64];

assign x1_last_encrypt = 	(text_length - text_position == 0 ) ? 64'b0:
			(text_length - text_position == 1 ) ? 64'b0:
			(text_length - text_position == 2 ) ? 64'b0:
			(text_length - text_position == 3 ) ? 64'b0:
			(text_length - text_position == 4 ) ? 64'b0:
			(text_length - text_position == 5 ) ? 64'b0:
			(text_length - text_position == 6 ) ? 64'b0:
			(text_length - text_position == 7 ) ? 64'b0:
			(text_length - text_position == 8 ) ? 64'h00_00_00_00_00_00_00_01:
			(text_length - text_position == 9 ) ? {56'h00_00_00_00_00_00_01,data_in[7:0] }:
			(text_length - text_position == 10) ? {48'h00_00_00_00_00_01,data_in[15:0]}:
			(text_length - text_position == 11) ? {40'h00_00_00_00_01,data_in[23:0]}:
			(text_length - text_position == 12) ? {32'h00_00_00_01,data_in[31:0]}:
			(text_length - text_position == 13) ? {24'h00_00_01,data_in[39:0]}:
			(text_length - text_position == 14) ? {16'h00_01,data_in[47:0]}:
			(text_length - text_position == 15) ? {8'h01,data_in[55:0]}:
			(text_length - text_position == 16) ? data_in[63:0]: data_in[63:0];

assign x0_last_decrypt = 	(text_length - text_position == 0 ) ? 64'h00_00_00_00_00_00_00_01:
			(text_length - text_position == 1 ) ? {56'h00_00_00_00_00_00_01,data_in[7:0]}:
			(text_length - text_position == 2 ) ? {48'h00_00_00_00_00_01,data_in[15:0]}:
			(text_length - text_position == 3 ) ? {40'h00_00_00_00_01,data_in[23:0]}:
			(text_length - text_position == 4 ) ? {32'h00_00_00_01,data_in[31:0]}:
			(text_length - text_position == 5 ) ? {24'h00_00_01,data_in[39:0]}:
			(text_length - text_position == 6 ) ? {16'h00_01,data_in[47:0]}:
			(text_length - text_position == 7 ) ? {8'h01,data_in[55:0]}:
			(text_length - text_position == 8 ) ? data_in[63:0]:
			(text_length - text_position == 9 ) ? data_in[63:0]:
			(text_length - text_position == 10) ? data_in[63:0]:
			(text_length - text_position == 11) ? data_in[63:0]:
			(text_length - text_position == 12) ? data_in[63:0]:
			(text_length - text_position == 13) ? data_in[63:0]:
			(text_length - text_position == 14) ? data_in[63:0]:
			(text_length - text_position == 15) ? data_in[63:0]:
			(text_length - text_position == 16) ? data_in[63:0]: data_in[63:0];

assign x1_last_decrypt = 	(text_length - text_position == 0 ) ? 64'b0:
			(text_length - text_position == 1 ) ? 64'b0:
			(text_length - text_position == 2 ) ? 64'b0:
			(text_length - text_position == 3 ) ? 64'b0:
			(text_length - text_position == 4 ) ? 64'b0:
			(text_length - text_position == 5 ) ? 64'b0:
			(text_length - text_position == 6 ) ? 64'b0:
			(text_length - text_position == 7 ) ? 64'b0:
			(text_length - text_position == 8 ) ? 64'h00_00_00_00_00_00_00_01:
			(text_length - text_position == 9 ) ? {56'h00_00_00_00_00_00_01,data_in[71:64] }:
			(text_length - text_position == 10) ? {48'h00_00_00_00_00_01,data_in[79:64]}:
			(text_length - text_position == 11) ? {40'h00_00_00_00_01,data_in[87:64]}:
			(text_length - text_position == 12) ? {32'h00_00_00_01,data_in[95:64]}:
			(text_length - text_position == 13) ? {24'h00_00_01,data_in[103:64]}:
			(text_length - text_position == 14) ? {16'h00_01,data_in[111:64]}:
			(text_length - text_position == 15) ? {8'h01,data_in[119:64]}:
			(text_length - text_position == 16) ? data_in[127:64]: data_in[127:64];

assign x0_last = (~process_mode_sel) ? x0_last_encrypt : x0_last_decrypt;
assign x1_last = (~process_mode_sel) ? x1_last_encrypt : x1_last_decrypt;
assign x2_last = x2_i;
assign x3_last = x3_i;
assign x4_last = x4_i;

assign data_out_last = {x1_i ^ x1_last ,x0_i ^ x0_last};

assign s0 = (~process_mode_sel) ? x0_i ^ data_in[127:64] : data_in[63:0];
assign s1 = (~process_mode_sel) ? x1_i ^ data_in[63:0] : data_in[127:64];
assign s2 = x2_i;
assign s3 = x3_i;
assign s4 = x4_i;


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

endmodule
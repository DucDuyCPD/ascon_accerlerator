`timescale  1ns/1ps
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

	output wire [63:0] x0_i_encrypt_decrypt_p8,
	output wire [63:0] x1_i_encrypt_decrypt_p8,
	output wire [63:0] x2_i_encrypt_decrypt_p8,
	output wire [63:0] x3_i_encrypt_decrypt_p8,
	output wire [63:0] x4_i_encrypt_decrypt_p8,

	input  wire [63:0] x0_o_encrypt_decrypt_p8,
	input  wire [63:0] x1_o_encrypt_decrypt_p8,
	input  wire [63:0] x2_o_encrypt_decrypt_p8,
	input  wire [63:0] x3_o_encrypt_decrypt_p8,
	input  wire [63:0] x4_o_encrypt_decrypt_p8

);

wire [63:0] x0_p8, x1_p8, x2_p8, x3_p8, x4_p8;

wire [63:0] s0, s1, s2, s3, s4; 

wire [127:0] data_out_last;

always @(posedge clk or negedge rst_n)begin
	if (~rst_n) begin
		x0_o <= 64'b0;
		x1_o <= 64'b0;
		x2_o <= 64'b0;
		x3_o <= 64'b0;
		x4_o <= 64'b0;
		data_out <= 128'b0;
	end
	else begin
		if (process_en) begin
			if (text_length - text_position >= 16) begin
				x0_o <= x0_p8;
				x1_o <= x1_p8;
				x2_o <= x2_p8;
				x3_o <= x3_p8;
				x4_o <= x4_p8;
				data_out <= {x0_i ^ data_in[127:64], x1_i ^ data_in[63:0]};
			end 
			else begin
				data_out <= data_out_last;
				if (~process_mode_sel) begin
					x0_o <= x0_last ^ x0_i;
					x1_o <= x1_last ^ x1_i;
					x2_o <= x2_last;
					x3_o <= x3_last;
					x4_o <= x4_last;
				end
				else begin 
					x2_o <= x2_last;
					x3_o <= x3_last;
					x4_o <= x4_last;
					case (text_length - text_position)
						32'h0 : begin
							x0_o <= x0_i ^ x0_last;
							x1_o <= x1_i ^ x1_last;
						end						
						32'h1 : begin
							x0_o <= {x0_i[63:8], 8'b0} ^ x0_last;
							x1_o <= x1_i ^ x1_last;
						end
						32'h2 : begin
							x0_o <= {x0_i[63:16], 16'b0} ^ x0_last;
							x1_o <= x1_i ^ x1_last;
						end
						32'h3 : begin
							x0_o <= {x0_i[63:24], 24'b0} ^ x0_last;
							x1_o <= x1_i ^ x1_last;
						end
						32'h4 : begin
							x0_o <= {x0_i[63:32], 32'b0} ^ x0_last;
							x1_o <= x1_i ^ x1_last;
						end
						32'h5 : begin
							x0_o <= {x0_i[63:40], 40'b0} ^ x0_last;
							x1_o <= x1_i ^ x1_last;
						end
						32'h6 : begin
							x0_o <= {x0_i[63:48], 48'b0} ^ x0_last;
							x1_o <= x1_i ^ x1_last;
						end
						32'h7 : begin
							x0_o <= {x0_i[63:56], 56'b0} ^ x0_last;
							x1_o <= x1_i ^ x1_last;
						end
						32'h8 : begin 
							x0_o <= x0_last;
							x1_o <= x1_i ^ x1_last;
						end
						32'h9 : begin 
							x0_o <= x0_last;
							x1_o <= {x1_i[63:8], 8'b0} ^ x1_last;
						end
						32'ha : begin
							x0_o <= x0_last;
							x1_o <= {x1_i[63:16], 16'b0} ^ x1_last;	
						end
						32'hb : begin
							x0_o <= x0_last;
							x1_o <= {x1_i[63:24], 24'b0} ^ x1_last;
						end
						32'hc : begin 
							x0_o <= x0_last;
							x1_o <= {x1_i[63:32], 32'b0} ^ x1_last;
						end
						32'hd : begin
							x0_o <= x0_last;
							x1_o <= {x1_i[63:40], 40'b0} ^ x1_last;	
						end
						32'he : begin
							x0_o <= x0_last;
							x1_o <= {x1_i[63:48], 48'b0} ^ x1_last;
						end
						32'hf : begin  
							x0_o <= x0_last;
							x1_o <= {x1_i[63:56], 56'b0} ^ x1_last;
						end
					endcase
				end
			end
		end
	end
end

wire [63:0] x0_last, x1_last, x2_last, x3_last, x4_last;

assign x0_last = 		(text_length - text_position == 0 ) ?  64'h1 :
			(text_length - text_position == 1 ) ? {56'h1,data_in[71:64]} :
			(text_length - text_position == 2 ) ? {48'h1,data_in[79:64]} :
			(text_length - text_position == 3 ) ? {40'h1,data_in[87:64]} :
			(text_length - text_position == 4 ) ? {32'h1,data_in[95:64]} :
			(text_length - text_position == 5 ) ? {24'h1,data_in[103:64]} :
			(text_length - text_position == 6 ) ? {16'h1,data_in[111:64]} :
			(text_length - text_position == 7 ) ? { 8'h1,data_in[119:64]} : data_in[127:64];

assign x1_last= 		(text_length - text_position == 0 ) ?  64'b0 :
			(text_length - text_position == 1 ) ?  64'b0 :
			(text_length - text_position == 2 ) ?  64'b0 :
			(text_length - text_position == 3 ) ?  64'b0 :
			(text_length - text_position == 4 ) ?  64'b0 :
			(text_length - text_position == 5 ) ?  64'b0 :
			(text_length - text_position == 6 ) ?  64'b0 :
			(text_length - text_position == 7 ) ?  64'b0 :
			(text_length - text_position == 8 ) ?  64'h1 :
			(text_length - text_position == 9 ) ? {56'h1,data_in[7:0]} :
			(text_length - text_position == 10) ? {48'h1,data_in[15:0]} :
			(text_length - text_position == 11) ? {40'h1,data_in[23:0]} :
			(text_length - text_position == 12) ? {32'h1,data_in[31:0]} :
			(text_length - text_position == 13) ? {24'h1,data_in[39:0]} :
			(text_length - text_position == 14) ? {16'h1,data_in[47:0]} :
			(text_length - text_position == 15) ? { 8'h1,data_in[55:0]} : data_in[63:0];

assign x2_last = x2_i;
assign x3_last = x3_i;
assign x4_last = x4_i;

wire [63:0] data_out_last_0, data_out_last_1;
assign data_out_last_0 = x0_i ^ x0_last;
assign data_out_last_1 = x1_i ^ x1_last;

assign data_out_last = 	(text_length - text_position == 0 ) ? 128'h0 :
			(text_length - text_position == 1 ) ? {56'h0 , data_out_last_0 [7:0] , 64'h0} :
			(text_length - text_position == 2 ) ? {48'h0 , data_out_last_0 [15:0] , 64'h0} :
			(text_length - text_position == 3 ) ? {40'h0 , data_out_last_0 [23:0] , 64'h0} :
			(text_length - text_position == 4 ) ? {32'h0 , data_out_last_0 [31:0] , 64'h0} :
			(text_length - text_position == 5 ) ? {24'h0 , data_out_last_0 [39:0] , 64'h0} :
			(text_length - text_position == 6 ) ? {16'h0 , data_out_last_0 [47:0] , 64'h0} :
			(text_length - text_position == 7 ) ? { 8'h0 , data_out_last_0 [55:0] , 64'h0} :
			(text_length - text_position == 8 ) ? {data_out_last_0 , 64'h0}  :
			(text_length - text_position == 9 ) ? {data_out_last_0 , 56'h0, data_out_last_1 [7:0]}  :
			(text_length - text_position == 10) ? {data_out_last_0 , 48'h0, data_out_last_1 [15:0]}  :
			(text_length - text_position == 11) ? {data_out_last_0 , 40'h0, data_out_last_1 [23:0]}  :
			(text_length - text_position == 12) ? {data_out_last_0 , 32'h0, data_out_last_1 [31:0]}  :
			(text_length - text_position == 13) ? {data_out_last_0 , 24'h0, data_out_last_1 [39:0]}  :
			(text_length - text_position == 14) ? {data_out_last_0 , 16'h0, data_out_last_1 [47:0]} :
			(text_length - text_position == 15) ? {data_out_last_0 ,  8'h0, data_out_last_1 [55:0]}  : {data_out_last_0 , data_out_last_1};


assign s0 = (~process_mode_sel) ? x0_i ^ data_in[127:64] : data_in[127:64];
assign s1 = (~process_mode_sel) ? x1_i ^ data_in[63:0] : data_in[63:0];
assign s2 = x2_i;
assign s3 = x3_i;
assign s4 = x4_i;

assign x0_i_encrypt_decrypt_p8 = s0;
assign x1_i_encrypt_decrypt_p8 = s1;
assign x2_i_encrypt_decrypt_p8 = s2;
assign x3_i_encrypt_decrypt_p8 = s3;
assign x4_i_encrypt_decrypt_p8 = s4;

assign x0_p8 = x0_o_encrypt_decrypt_p8;
assign x1_p8 = x1_o_encrypt_decrypt_p8;
assign x2_p8 = x2_o_encrypt_decrypt_p8;
assign x3_p8 = x3_o_encrypt_decrypt_p8;
assign x4_p8 = x4_o_encrypt_decrypt_p8;

endmodule
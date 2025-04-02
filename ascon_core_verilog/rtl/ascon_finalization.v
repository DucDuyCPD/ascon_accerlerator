`timescale  1ns/1ps
module ascon_finalization (
	input wire clk, rst_n,

	input wire process_en,

	input wire [127:0] key,

	input wire [63:0] x0_i,
	input wire [63:0] x1_i,
	input wire [63:0] x2_i,
	input wire [63:0] x3_i,
	input wire [63:0] x4_i,

	output reg [127:0] tag,

	output wire [63:0] x0_i_final_p12,
	output wire [63:0] x1_i_final_p12,
	output wire [63:0] x2_i_final_p12,
	output wire [63:0] x3_i_final_p12,
	output wire [63:0] x4_i_final_p12,

	input  wire [63:0] x3_o_final_p12,
	input  wire [63:0] x4_o_final_p12
);

always @(posedge clk or negedge rst_n) begin
	if(~rst_n) begin
		tag <= 128'b0;
	end else begin
		if (process_en) begin
			tag[127:64] <= x4_o_final_p12 ^ key[63:0];
			tag[63:0] <= x3_o_final_p12 ^ key[127:64];
		end
	end
end

assign x0_i_final_p12 = x0_i;
assign x1_i_final_p12 = x1_i;
assign x2_i_final_p12 = (~x2_i & key[127:64])|(x2_i & ~key[127:64]);
assign x3_i_final_p12 = (~x3_i & key[63:0])|(x3_i & ~key[63:0]);
assign x4_i_final_p12 = x4_i;

endmodule
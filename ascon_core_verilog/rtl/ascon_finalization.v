`timescale  1ns/1ps
module ascon_finalization (
	input wire clk, rst_n,

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

	input  wire [63:0] x0_o_final_p12,
	input  wire [63:0] x1_o_final_p12,
	input  wire [63:0] x2_o_final_p12,
	input  wire [63:0] x3_o_final_p12,
	input  wire [63:0] x4_o_final_p12
);

wire [63:0] s0, s1, s2, s3, s4; 

wire [63:0] x0_p12, x1_p12, x2_p12, x3_p12, x4_p12;

assign s0 = x0_i;
assign s1 = x1_i;
assign s2 = x2_i ^ key[127:64];
assign s3 = x3_i ^ key[63:0];
assign s4 = x4_i ^ 64'b0;

always @(posedge clk or negedge rst_n) begin
	if(~rst_n) begin
		tag <= 128'b0;
	end else begin
		tag[127:64] <= x4_p12 ^ key[63:0];
		tag[63:0] <= x3_p12 ^ key[127:64];
	end
end

assign x0_i_final_p12 = s0;
assign x1_i_final_p12 = s1;
assign x2_i_final_p12 = s2;
assign x3_i_final_p12 = s3;
assign x4_i_final_p12 = s4;

assign x0_p12 = x0_o_final_p12;
assign x1_p12 = x1_o_final_p12;
assign x2_p12 = x2_o_final_p12;
assign x3_p12 = x3_o_final_p12;
assign x4_p12 = x4_o_final_p12;

endmodule
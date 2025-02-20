module ascon_hash (
	input wire clk,
	input wire rst_n,

	input wire process_en,
	
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

	output reg [63:0] hash_out
);

wire [63:0] x0_p12, x1_p12, x2_p12, x3_p12, x4_p12;

always @(posedge clk or negedge rst_n) begin
	if(~rst_n) begin
		x0_o <= 64'b0;
		x1_o <= 64'b0;
		x2_o <= 64'b0;
		x3_o <= 64'b0;
		x4_o <= 64'b0;
		hash_out <= 64'b0;
	end else begin
		if (process_en) begin
			hash_out <= x0_p12;
			x0_o <= x0_p12;
			x1_o <= x1_p12;
			x2_o <= x2_p12;
			x3_o <= x3_p12;
			x4_o <= x4_p12;
		end
	end
end

ascon_permutation_p12 ascon_p12(
	.x0_i(x0_i),
	.x1_i(x0_i),
	.x2_i(x0_i),
	.x3_i(x0_i),
	.x4_i(x0_i),

	.x0_o(x0_p12),
	.x1_o(x1_p12),
	.x2_o(x2_p12),
	.x3_o(x3_p12),
	.x4_o(x4_p12)
);

endmodule : ascon_hash
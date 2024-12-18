module ascon_process_associated_data (
	input clk, rst_n,

	input wire [32:0] associated_data_length,
	input wire [32:0] data_position,

	input wire [63:0] associated_data,

	input wire [63:0] x0_i,
	input wire [63:0] x1_i,
	input wire [63:0] x2_i,
	input wire [63:0] x3_i,
	input wire [63:0] x4_i,

	output reg [63:0] x0_o,
	output reg [63:0] x1_o,
	output reg [63:0] x2_o,
	output reg [63:0] x3_o,
	output reg [63:0] x4_o
	
);

wire [63:0] x0, x1, x2, x3, x4;

reg [63:0] data_pad;

always @(posedge clk or negedge rst_n)begin
	if (~rst_n) begin
		x0_o <= 64'b0;
		x1_o <= 64'b0;
		x2_o <= 64'b0;
		x3_o <= 64'b0;
		x4_o <= 64'b0;
		data_pad <= 0;
	end
	else begin
		if (associated_data_length == 0) begin
			x0_o <= x0_i;
			x1_o <= x1_i;
			x2_o <= x2_i;
			x3_o <= x3_i;
			x4_o <= x4_i ^ 64'b1;
		end
		else begin
			if (data_position < associated_data_length) begin
				data_pad <= associated_data;
				x0_o <= x0;
				x1_o <= x1;
				x2_o <= x2;
				x3_o <= x3;
				x4_o <= x4;
			end
			else begin
				case (data_position - associated_data_length)
					32'h0: data_pad <= associated_data ^ 64'h8000_0000_0000_0000;
					32'h1: data_pad <= associated_data ^ 64'h0080_0000_0000_0000;
					32'h2: data_pad <= associated_data ^ 64'h0000_8000_0000_0000;
					32'h3: data_pad <= associated_data ^ 64'h0000_0080_0000_0000;
					32'h4: data_pad <= associated_data ^ 64'h0000_0000_8000_0000;
					32'h5: data_pad <= associated_data ^ 64'h0000_0000_0080_0000;
					32'h6: data_pad <= associated_data ^ 64'h0000_0000_0000_8000;
					32'h7: data_pad <= associated_data ^ 64'h0000_0000_0000_0080;
					default : ;
				endcase 
			end
		end
	end
end

wire [63:0] A_xor_Sr;
assign A_xor_Sr = data_pad ^ x0_i;

ascon_permutation_p6 ascon_p6(
	.x0_i(A_xor_Sr),
	.x1_i(x1_i),
	.x2_i(x2_i),
	.x3_i(x3_i),
	.x4_i(x4_i),

	.x0_o(x0),
	.x1_o(x1),
	.x2_o(x2),
	.x3_o(x3),
	.x4_o(x4)
);

endmodule
`timescale  1ns/1ps
module ascon_permutation_1p(
	input wire [63:0] round_const,
	
	input wire [63:0] x0_i,
	input wire [63:0] x1_i,
	input wire [63:0] x2_i,
	input wire [63:0] x3_i,
	input wire [63:0] x4_i,

	output wire [63:0] x0_o,
	output wire [63:0] x1_o,
	output wire [63:0] x2_o,
	output wire [63:0] x3_o,
	output wire [63:0] x4_o
);

	parameter one = 64'hFFFF_FFFF_FFFF_FFFF;

	wire [63:0] x0_rc, x1_rc, x2_rc, x3_rc, x4_rc;
	// wire [63:0] a, b, c, d, e, f, g, h, i, j;
	wire [63:0] x0_s, x1_s, x2_s, x3_s, x4_s;
	wire [63:0] x0_sr19, x0_sr28, x1_sr61, x1_sr39, x2_sr1, x2_sr6, x3_sr10, x3_sr17, x4_sr7, x4_sr41;
	// wire [63:0] x0_rc_xor_x4_rc, x2_rc_xor_x1_rc, x4_rc_xor_x3_rc;

	wire [63:0] rc;
	assign rc = round_const;

	assign x0_rc = x0_i;
	assign x1_rc = x1_i;
	assign x2_rc = (~x2_i & round_const) | (x2_i & ~round_const);
	assign x3_rc = x3_i;
	assign x4_rc = x4_i;

//version 1
	// assign a = ((x0_rc ^ x4_rc) ^ one) & x1_rc;
	// assign b = (x1_rc ^ one) & (x2_rc ^ x1_rc);
	// assign c = ((x2_rc ^ x1_rc) ^ one) & x3_rc;
	// assign d = (x3_rc ^ one) & (x4_rc ^ x3_rc);
	// assign e = ((x4_rc ^ x3_rc) ^ one) & (x0_rc ^ x4_rc);
	// assign f = (x0_rc ^ x4_rc) ^ b;
	// assign g = x1_rc ^ c;
	// assign h = (x2_rc ^ x1_rc) ^ d;
	// assign i = x3_rc ^ e;
	// assign j = (x4_rc ^ x3_rc) ^ a;

	// assign x0_s = f ^ j;
	// assign x1_s = g ^ f;
	// assign x2_s = h ^ one;
	// assign x3_s = i ^ h;
	// assign x4_s = j;

//version 2
	// assign x0_rc_xor_x4_rc = x0_rc ^ x4_rc;
	// assign x2_rc_xor_x1_rc = x2_rc ^ x1_rc;
	// assign x4_rc_xor_x3_rc = x4_rc ^ x3_rc;

	// assign a = ~x0_rc_xor_x4_rc & x1_rc;
	// assign b = ~x1_rc & x2_rc_xor_x1_rc;
	// assign c = ~x2_rc_xor_x1_rc & x3_rc;
	// assign d = ~x3_rc & x4_rc_xor_x3_rc;
	// assign e = ~x4_rc_xor_x3_rc & x0_rc_xor_x4_rc;
	// assign f = x0_rc_xor_x4_rc ^ b;

	// assign x0_s = f ^ x4_s;
	// assign x1_s = x1_rc ^ c ^ f;
	// assign x2_s = ~(x2_rc_xor_x1_rc ^ d);
	// assign x3_s = x3_rc ^ e ^ ~x2_s;
	// assign x4_s = x4_rc_xor_x3_rc ^ a;

//version 3
	assign x0_s = (~x4_rc & ~x3_rc & x1_rc) | (x3_rc & ~x2_rc & ~x1_rc & ~x0_rc) | (x3_rc & x2_rc & ~x1_rc & x0_rc) | (~x3_rc & ~x2_rc & ~x1_rc & x0_rc) | (~x3_rc & x2_rc & ~x1_rc & ~x0_rc) | (x4_rc & x3_rc & x1_rc);
	assign x1_s = (~x4_rc & ~x3_rc & ~x2_rc & ~x1_rc & x0_rc) | (~x4_rc & x3_rc & x2_rc & x1_rc & x0_rc) | (x4_rc & ~x3_rc & ~x2_rc & ~x1_rc & ~x0_rc) | (x4_rc & x3_rc & x2_rc & x1_rc & ~x0_rc) | (~x4_rc & ~x3_rc & x1_rc & ~x0_rc) | (~x4_rc & x2_rc & ~x1_rc & ~x0_rc) | (~x4_rc & x3_rc & ~x2_rc & ~x0_rc) | (x4_rc & ~x3_rc & x1_rc & x0_rc) | (x4_rc & x2_rc & ~x1_rc & x0_rc) | (x4_rc & x3_rc & ~x2_rc & x0_rc);
	assign x2_s = (~x4_rc & x2_rc & x1_rc) | (~x4_rc & ~x2_rc & ~x1_rc) | (x3_rc & ~x2_rc & ~x1_rc) | (x3_rc & x2_rc & x1_rc) | (x4_rc & ~x3_rc & x2_rc & ~x1_rc) | (x4_rc & ~x3_rc & ~x2_rc & x1_rc);
	assign x3_s = (~x2_rc & ~x1_rc & x0_rc) | (~x4_rc & ~x3_rc & ~x2_rc & x1_rc & ~x0_rc) | (~x4_rc & ~x3_rc & x2_rc & ~x1_rc & ~x0_rc) | (x2_rc & x1_rc & x0_rc) | (~x4_rc & x3_rc & ~x2_rc & ~x1_rc) | (~x4_rc & x3_rc & x2_rc & x1_rc) | (x4_rc & ~x3_rc & ~x2_rc & ~x1_rc) | (x4_rc & ~x3_rc & x2_rc & x1_rc) | (x4_rc & x3_rc & ~x2_rc & x1_rc & ~x0_rc) | (x4_rc & x3_rc & x2_rc & ~x1_rc & ~x0_rc);
	assign x4_s = (~x4_rc & x3_rc & ~x1_rc) | (x4_rc & ~x3_rc & ~x1_rc) | (~x3_rc & x1_rc & ~x0_rc) | (x3_rc & x1_rc & x0_rc);
//==============================================

	assign x0_sr19 = {x0_s[18:0],x0_s[63:19]};
	assign x0_sr28 = {x0_s[27:0],x0_s[63:28]};
	assign x1_sr61 = {x1_s[60:0],x1_s[63:61]};
	assign x1_sr39 = {x1_s[38:0],x1_s[63:39]};
	assign x2_sr1 = {x2_s[0],x2_s[63:1]};
	assign x2_sr6 = {x2_s[5:0],x2_s[63:6]};
	assign x3_sr10 = {x3_s[9:0],x3_s[63:10]};
	assign x3_sr17 = {x3_s[16:0],x3_s[63:17]};
	assign x4_sr7 = {x4_s[6:0],x4_s[63:7]};
	assign x4_sr41 = {x4_s[40:0],x4_s[63:41]};

	assign x0_o = x0_s ^ x0_sr19 ^ x0_sr28;
	assign x1_o = x1_s ^ x1_sr61 ^ x1_sr39;
	assign x2_o = x2_s ^ x2_sr1 ^ x2_sr6;
	assign x3_o = x3_s ^ x3_sr10 ^ x3_sr17;
	assign x4_o = x4_s ^ x4_sr7 ^ x4_sr41;

endmodule

module ascon_permutation_multicycle_p4 (
	input clk,    // Clock
	input rst_n,  // Asynchronous reset active low

	input wire en_p8,
	input wire en_p12,
	
	input wire [63:0] x0_i,
	input wire [63:0] x1_i,
	input wire [63:0] x2_i,
	input wire [63:0] x3_i,
	input wire [63:0] x4_i,

	output wire [63:0] x0_o,
	output wire [63:0] x1_o,
	output wire [63:0] x2_o,
	output wire [63:0] x3_o,
	output wire [63:0] x4_o,

	output wire done
);

reg [63:0] x0_reg_save;
reg [63:0] x1_reg_save;
reg [63:0] x2_reg_save;
reg [63:0] x3_reg_save;
reg [63:0] x4_reg_save;

reg [1:0] state;

wire [63:0] x0_round [2:0];
wire [63:0] x1_round [2:0];
wire [63:0] x2_round [2:0];
wire [63:0] x3_round [2:0];
wire [63:0] x4_round [2:0];

wire [63:0] x0_i_from_reg, x1_i_from_reg, x2_i_from_reg, x3_i_from_reg, x4_i_from_reg;
wire [63:0] x0_o_from_module, x1_o_from_module, x2_o_from_module, x3_o_from_module, x4_o_from_module;
wire [63:0] x0_temp, x1_temp, x2_temp, x3_temp, x4_temp;

wire [63:0] rc_r0, rc_r1, rc_r2, rc_r3;

always @(posedge clk or negedge rst_n) begin
	if(~rst_n) begin
		x0_reg_save <= 0;
		x1_reg_save <= 0;
		x2_reg_save <= 0;
		x3_reg_save <= 0;
		x4_reg_save <= 0;
	end else begin
		if (en_p8 | en_p12) begin
			x0_reg_save <= x0_o_from_module;
			x1_reg_save <= x1_o_from_module;
			x2_reg_save <= x2_o_from_module;
			x3_reg_save <= x3_o_from_module;
			x4_reg_save <= x4_o_from_module;
		end else begin
			x0_reg_save <= 0;
			x1_reg_save <= 0;
			x2_reg_save <= 0;
			x3_reg_save <= 0;
			x4_reg_save <= 0;
		end
	end
end

always @(posedge clk or negedge rst_n) begin
	if(~rst_n) begin
		state <= 0;
	end else begin
		if (en_p8 | en_p12) begin
			if (done) state <= 0;
			else state <= state + 1;
		end else begin
			state <= 0;
		end	
	end
end

assign done = ((en_p12 & (state == 2'b11)) | (en_p8 & (state == 2'b10))) ? 1'b1 : 1'b0;

assign rc_r0 = 	(en_p12 & (state == 2'b00)) ? 64'hf0 : 
				(en_p12 & (state == 2'b01)) ? 64'hb4 : 
				(en_p12 & (state == 2'b10)) ? 64'h78 : 
				(en_p8  & (state == 2'b00)) ? 64'hb4 :
				(en_p8  & (state == 2'b01)) ? 64'h78 : 64'h0; 

assign rc_r1 = 	(en_p12 & (state == 2'b00)) ? 64'he1 : 
				(en_p12 & (state == 2'b01)) ? 64'ha5 : 
				(en_p12 & (state == 2'b10)) ? 64'h69 : 
				(en_p8  & (state == 2'b00)) ? 64'ha5 :
				(en_p8  & (state == 2'b01)) ? 64'h69 : 64'h0; 

assign rc_r2 = 	(en_p12 & (state == 2'b00)) ? 64'hd2 : 
				(en_p12 & (state == 2'b01)) ? 64'h96 : 
				(en_p12 & (state == 2'b10)) ? 64'h5a : 
				(en_p8  & (state == 2'b00)) ? 64'h96 :
				(en_p8  & (state == 2'b01)) ? 64'h5a : 64'h0; 

assign rc_r3 = 	(en_p12 & (state == 2'b00)) ? 64'hc3 : 
				(en_p12 & (state == 2'b01)) ? 64'h87 : 
				(en_p12 & (state == 2'b10)) ? 64'h4b : 
				(en_p8  & (state == 2'b00)) ? 64'h87 :
				(en_p8  & (state == 2'b01)) ? 64'h4b : 64'h0; 

assign x0_temp = (~done) ? x0_reg_save : 64'h0;
assign x1_temp = (~done) ? x1_reg_save : 64'h0;
assign x2_temp = (~done) ? x2_reg_save : 64'h0;
assign x3_temp = (~done) ? x3_reg_save : 64'h0;
assign x4_temp = (~done) ? x4_reg_save : 64'h0;

assign x0_o = (done) ? x0_reg_save : 64'h0;
assign x1_o = (done) ? x1_reg_save : 64'h0;
assign x2_o = (done) ? x2_reg_save : 64'h0;
assign x3_o = (done) ? x3_reg_save : 64'h0;
assign x4_o = (done) ? x4_reg_save : 64'h0;

assign x0_i_from_reg = (state == 2'b00) ? x0_i : x0_temp;
assign x1_i_from_reg = (state == 2'b00) ? x1_i : x1_temp;
assign x2_i_from_reg = (state == 2'b00) ? x2_i : x2_temp;
assign x3_i_from_reg = (state == 2'b00) ? x3_i : x3_temp;
assign x4_i_from_reg = (state == 2'b00) ? x4_i : x4_temp;

ascon_permutation_1p r0(.round_const(rc_r0), .x0_i(x0_i_from_reg), .x1_i(x1_i_from_reg), .x2_i(x2_i_from_reg), .x3_i(x3_i_from_reg), .x4_i(x4_i_from_reg), .x0_o(x0_round[0]), .x1_o(x1_round[0]), .x2_o(x2_round[0]), .x3_o(x3_round[0]), .x4_o(x4_round[0]));
ascon_permutation_1p r1(.round_const(rc_r1), .x0_i(x0_round[0]), .x1_i(x1_round[0]), .x2_i(x2_round[0]), .x3_i(x3_round[0]), .x4_i(x4_round[0]), .x0_o(x0_round[1]), .x1_o(x1_round[1]), .x2_o(x2_round[1]), .x3_o(x3_round[1]), .x4_o(x4_round[1]));
ascon_permutation_1p r2(.round_const(rc_r2), .x0_i(x0_round[1]), .x1_i(x1_round[1]), .x2_i(x2_round[1]), .x3_i(x3_round[1]), .x4_i(x4_round[1]), .x0_o(x0_round[2]), .x1_o(x1_round[2]), .x2_o(x2_round[2]), .x3_o(x3_round[2]), .x4_o(x4_round[2]));
ascon_permutation_1p r3(.round_const(rc_r3), .x0_i(x0_round[2]), .x1_i(x1_round[2]), .x2_i(x2_round[2]), .x3_i(x3_round[2]), .x4_i(x4_round[2]), .x0_o(x0_o_from_module), .x1_o(x1_o_from_module), .x2_o(x2_o_from_module), .x3_o(x3_o_from_module), .x4_o(x4_o_from_module));

endmodule

// module ascon_permutation_p8(
// 	input wire [63:0] x0_i,
// 	input wire [63:0] x1_i,
// 	input wire [63:0] x2_i,
// 	input wire [63:0] x3_i,
// 	input wire [63:0] x4_i,

// 	output wire [63:0] x0_o,
// 	output wire [63:0] x1_o,
// 	output wire [63:0] x2_o,
// 	output wire [63:0] x3_o,
// 	output wire [63:0] x4_o
// );

// 	parameter rc0 = 64'hb4;
// 	parameter rc1 = 64'ha5;
// 	parameter rc2 = 64'h96;
// 	parameter rc3 = 64'h87;
// 	parameter rc4 = 64'h78;
// 	parameter rc5 = 64'h69;
// 	parameter rc6 = 64'h5a;
// 	parameter rc7 = 64'h4b;

// 	wire [63:0] x0_round [6:0];
// 	wire [63:0] x1_round [6:0];
// 	wire [63:0] x2_round [6:0];
// 	wire [63:0] x3_round [6:0];
// 	wire [63:0] x4_round [6:0];

// 	ascon_permutation_1p r0(.round_const(rc0), .x0_i(x0_i), .x1_i(x1_i), .x2_i(x2_i), .x3_i(x3_i), .x4_i(x4_i), .x0_o(x0_round[0]), .x1_o(x1_round[0]), .x2_o(x2_round[0]), .x3_o(x3_round[0]), .x4_o(x4_round[0]));
// 	ascon_permutation_1p r1(.round_const(rc1), .x0_i(x0_round[0]), .x1_i(x1_round[0]), .x2_i(x2_round[0]), .x3_i(x3_round[0]), .x4_i(x4_round[0]), .x0_o(x0_round[1]), .x1_o(x1_round[1]), .x2_o(x2_round[1]), .x3_o(x3_round[1]), .x4_o(x4_round[1]));
// 	ascon_permutation_1p r2(.round_const(rc2), .x0_i(x0_round[1]), .x1_i(x1_round[1]), .x2_i(x2_round[1]), .x3_i(x3_round[1]), .x4_i(x4_round[1]), .x0_o(x0_round[2]), .x1_o(x1_round[2]), .x2_o(x2_round[2]), .x3_o(x3_round[2]), .x4_o(x4_round[2]));
// 	ascon_permutation_1p r3(.round_const(rc3), .x0_i(x0_round[2]), .x1_i(x1_round[2]), .x2_i(x2_round[2]), .x3_i(x3_round[2]), .x4_i(x4_round[2]), .x0_o(x0_round[3]), .x1_o(x1_round[3]), .x2_o(x2_round[3]), .x3_o(x3_round[3]), .x4_o(x4_round[3]));
// 	ascon_permutation_1p r4(.round_const(rc4), .x0_i(x0_round[3]), .x1_i(x1_round[3]), .x2_i(x2_round[3]), .x3_i(x3_round[3]), .x4_i(x4_round[3]), .x0_o(x0_round[4]), .x1_o(x1_round[4]), .x2_o(x2_round[4]), .x3_o(x3_round[4]), .x4_o(x4_round[4]));
// 	ascon_permutation_1p r5(.round_const(rc5), .x0_i(x0_round[4]), .x1_i(x1_round[4]), .x2_i(x2_round[4]), .x3_i(x3_round[4]), .x4_i(x4_round[4]), .x0_o(x0_round[5]), .x1_o(x1_round[5]), .x2_o(x2_round[5]), .x3_o(x3_round[5]), .x4_o(x4_round[5]));
// 	ascon_permutation_1p r6(.round_const(rc6), .x0_i(x0_round[5]), .x1_i(x1_round[5]), .x2_i(x2_round[5]), .x3_i(x3_round[5]), .x4_i(x4_round[5]), .x0_o(x0_round[6]), .x1_o(x1_round[6]), .x2_o(x2_round[6]), .x3_o(x3_round[6]), .x4_o(x4_round[6]));
// 	ascon_permutation_1p r7(.round_const(rc7), .x0_i(x0_round[6]), .x1_i(x1_round[6]), .x2_i(x2_round[6]), .x3_i(x3_round[6]), .x4_i(x4_round[6]), .x0_o(x0_o), .x1_o(x1_o), .x2_o(x2_o), .x3_o(x3_o), .x4_o(x4_o));

// endmodule

// module ascon_permutation_p12(
// 	input wire [63:0] x0_i,
// 	input wire [63:0] x1_i,
// 	input wire [63:0] x2_i,
// 	input wire [63:0] x3_i,
// 	input wire [63:0] x4_i,

// 	output wire [63:0] x0_o,
// 	output wire [63:0] x1_o,
// 	output wire [63:0] x2_o,
// 	output wire [63:0] x3_o,
// 	output wire [63:0] x4_o
// );

// 	parameter rc0 = 64'hf0;
// 	parameter rc1 = 64'he1;
// 	parameter rc2 = 64'hd2;
// 	parameter rc3 = 64'hc3;
// 	parameter rc4 = 64'hb4;
// 	parameter rc5 = 64'ha5;
// 	parameter rc6 = 64'h96;
// 	parameter rc7 = 64'h87;
// 	parameter rc8 = 64'h78;
// 	parameter rc9 = 64'h69;
// 	parameter rc10 = 64'h5a;
// 	parameter rc11 = 64'h4b;

// 	wire [63:0] x0_round [10:0];
// 	wire [63:0] x1_round [10:0];
// 	wire [63:0] x2_round [10:0];
// 	wire [63:0] x3_round [10:0];
// 	wire [63:0] x4_round [10:0];

// 	ascon_permutation_1p r0(.round_const(rc0), .x0_i(x0_i), .x1_i(x1_i), .x2_i(x2_i), .x3_i(x3_i), .x4_i(x4_i), .x0_o(x0_round[0]), .x1_o(x1_round[0]), .x2_o(x2_round[0]), .x3_o(x3_round[0]), .x4_o(x4_round[0]));
// 	ascon_permutation_1p r1(.round_const(rc1), .x0_i(x0_round[0]), .x1_i(x1_round[0]), .x2_i(x2_round[0]), .x3_i(x3_round[0]), .x4_i(x4_round[0]), .x0_o(x0_round[1]), .x1_o(x1_round[1]), .x2_o(x2_round[1]), .x3_o(x3_round[1]), .x4_o(x4_round[1]));
// 	ascon_permutation_1p r2(.round_const(rc2), .x0_i(x0_round[1]), .x1_i(x1_round[1]), .x2_i(x2_round[1]), .x3_i(x3_round[1]), .x4_i(x4_round[1]), .x0_o(x0_round[2]), .x1_o(x1_round[2]), .x2_o(x2_round[2]), .x3_o(x3_round[2]), .x4_o(x4_round[2]));
// 	ascon_permutation_1p r3(.round_const(rc3), .x0_i(x0_round[2]), .x1_i(x1_round[2]), .x2_i(x2_round[2]), .x3_i(x3_round[2]), .x4_i(x4_round[2]), .x0_o(x0_round[3]), .x1_o(x1_round[3]), .x2_o(x2_round[3]), .x3_o(x3_round[3]), .x4_o(x4_round[3]));
// 	ascon_permutation_1p r4(.round_const(rc4), .x0_i(x0_round[3]), .x1_i(x1_round[3]), .x2_i(x2_round[3]), .x3_i(x3_round[3]), .x4_i(x4_round[3]), .x0_o(x0_round[4]), .x1_o(x1_round[4]), .x2_o(x2_round[4]), .x3_o(x3_round[4]), .x4_o(x4_round[4]));
// 	ascon_permutation_1p r5(.round_const(rc5), .x0_i(x0_round[4]), .x1_i(x1_round[4]), .x2_i(x2_round[4]), .x3_i(x3_round[4]), .x4_i(x4_round[4]), .x0_o(x0_round[5]), .x1_o(x1_round[5]), .x2_o(x2_round[5]), .x3_o(x3_round[5]), .x4_o(x4_round[5]));
// 	ascon_permutation_1p r6(.round_const(rc6), .x0_i(x0_round[5]), .x1_i(x1_round[5]), .x2_i(x2_round[5]), .x3_i(x3_round[5]), .x4_i(x4_round[5]), .x0_o(x0_round[6]), .x1_o(x1_round[6]), .x2_o(x2_round[6]), .x3_o(x3_round[6]), .x4_o(x4_round[6]));
// 	ascon_permutation_1p r7(.round_const(rc7), .x0_i(x0_round[6]), .x1_i(x1_round[6]), .x2_i(x2_round[6]), .x3_i(x3_round[6]), .x4_i(x4_round[6]), .x0_o(x0_round[7]), .x1_o(x1_round[7]), .x2_o(x2_round[7]), .x3_o(x3_round[7]), .x4_o(x4_round[7]));
// 	ascon_permutation_1p r8(.round_const(rc8), .x0_i(x0_round[7]), .x1_i(x1_round[7]), .x2_i(x2_round[7]), .x3_i(x3_round[7]), .x4_i(x4_round[7]), .x0_o(x0_round[8]), .x1_o(x1_round[8]), .x2_o(x2_round[8]), .x3_o(x3_round[8]), .x4_o(x4_round[8]));
// 	ascon_permutation_1p r9(.round_const(rc9), .x0_i(x0_round[8]), .x1_i(x1_round[8]), .x2_i(x2_round[8]), .x3_i(x3_round[8]), .x4_i(x4_round[8]), .x0_o(x0_round[9]), .x1_o(x1_round[9]), .x2_o(x2_round[9]), .x3_o(x3_round[9]), .x4_o(x4_round[9]));
// 	ascon_permutation_1p r10(.round_const(rc10), .x0_i(x0_round[9]), .x1_i(x1_round[9]), .x2_i(x2_round[9]), .x3_i(x3_round[9]), .x4_i(x4_round[9]), .x0_o(x0_round[10]), .x1_o(x1_round[10]), .x2_o(x2_round[10]), .x3_o(x3_round[10]), .x4_o(x4_round[10]));
// 	ascon_permutation_1p r11(.round_const(rc11), .x0_i(x0_round[10]), .x1_i(x1_round[10]), .x2_i(x2_round[10]), .x3_i(x3_round[10]), .x4_i(x4_round[10]), .x0_o(x0_o), .x1_o(x1_o), .x2_o(x2_o), .x3_o(x3_o), .x4_o(x4_o));

// endmodule
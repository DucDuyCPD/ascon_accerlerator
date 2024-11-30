`timescale 1ns/1ps
module test_ascon_permutation;
	reg [63:0] x0_i, x1_i, x2_i, x3_i, x4_i;
	reg [63:0] x0_p6, x1_p6, x2_p6, x3_p6, x4_p6;
	reg [63:0] x0_p8, x1_p8, x2_p8, x3_p8, x4_p8;
	reg [63:0] x0_p12, x1_p12, x2_p12, x3_p12, x4_p12;

	reg [63:0] rc;

	reg [63:0] x0_cmp, x1_cmp, x2_cmp, x3_cmp, x4_cmp;

ascon_permutation_p6 ascon_p6_dut(
	.x0_i(x0_i),
	.x1_i(x1_i),
	.x2_i(x2_i),
	.x3_i(x3_i),
	.x4_i(x4_i),

	.x0_o(x0_p6),
	.x1_o(x1_p6),
	.x2_o(x2_p6),
	.x3_o(x3_p6),
	.x4_o(x4_p6)
);
ascon_permutation_p8 ascon_p8_dut(
	.x0_i(x0_i),
	.x1_i(x1_i),
	.x2_i(x2_i),
	.x3_i(x3_i),
	.x4_i(x4_i),

	.x0_o(x0_p8),
	.x1_o(x1_p8),
	.x2_o(x2_p8),
	.x3_o(x3_p8),
	.x4_o(x4_p8)
);
ascon_permutation_p12 ascon_p12_dut(
	.x0_i(x0_i),
	.x1_i(x1_i),
	.x2_i(x2_i),
	.x3_i(x3_i),
	.x4_i(x4_i),

	.x0_o(x0_p12),
	.x1_o(x1_p12),
	.x2_o(x2_p12),
	.x3_o(x3_p12),
	.x4_o(x4_p12)
);

initial begin
	integer i = 0;

	$display("TEST PERMUTATION P6");
	$display("input		|output		|expect		|");
	for (i = 0; i < 50; i = i + 1) begin
		x0_i[31:0] = $urandom; x0_i[63:32] = $urandom;
		x1_i[31:0] = $urandom; x1_i[63:32] = $urandom;
		x2_i[31:0] = $urandom; x2_i[63:32] = $urandom;
		x3_i[31:0] = $urandom; x3_i[63:32] = $urandom;
		x4_i[31:0] = $urandom; x4_i[63:32] = $urandom;

		calculate_permutation(6, x0_i, x1_i, x2_i, x3_i, x4_i, x0_cmp, x1_cmp, x2_cmp, x3_cmp, x4_cmp);
		#1;
		$display("============case %2d===============", i);
		if (x0_p6 == x0_cmp) $display("%16h|%16h|%16h|PASS", x0_i, x0_p6, x0_cmp);
		else 				 $display("%16h|%16h|%16h|FAILED", x0_i, x0_p6, x0_cmp);
		if (x1_p6 == x1_cmp) $display("%16h|%16h|%16h|PASS", x1_i, x1_p6, x1_cmp);
		else 				 $display("%16h|%16h|%16h|FAILED", x1_i, x1_p6, x1_cmp);
		if (x2_p6 == x2_cmp) $display("%16h|%16h|%16h|PASS", x2_i, x2_p6, x2_cmp);
		else 				 $display("%16h|%16h|%16h|FAILED", x2_i, x2_p6, x2_cmp);
		if (x3_p6 == x3_cmp) $display("%16h|%16h|%16h|PASS", x3_i, x3_p6, x3_cmp);
		else 				 $display("%16h|%16h|%16h|FAILED", x3_i, x3_p6, x3_cmp);
		if (x4_p6 == x4_cmp) $display("%16h|%16h|%16h|PASS", x4_i, x4_p6, x4_cmp);
		else 				 $display("%16h|%16h|%16h|FAILED", x4_i, x4_p6, x4_cmp);
		#1;
	end

	$display("TEST PERMUTATION P8");
	$display("input		|output		|expect		|");
	for (i = 0; i < 50; i = i + 1) begin
		x0_i[31:0] = $urandom; x0_i[63:32] = $urandom;
		x1_i[31:0] = $urandom; x1_i[63:32] = $urandom;
		x2_i[31:0] = $urandom; x2_i[63:32] = $urandom;
		x3_i[31:0] = $urandom; x3_i[63:32] = $urandom;
		x4_i[31:0] = $urandom; x4_i[63:32] = $urandom;

		calculate_permutation(8, x0_i, x1_i, x2_i, x3_i, x4_i, x0_cmp, x1_cmp, x2_cmp, x3_cmp, x4_cmp);
		#1;
		$display("============case %2d===============", i);
		if (x0_p8 == x0_cmp) $display("%16h|%16h|%16h|PASS", x0_i, x0_p8, x0_cmp);
		else 				 $display("%16h|%16h|%16h|FAILED", x0_i, x0_p8, x0_cmp);
		if (x1_p8 == x1_cmp) $display("%16h|%16h|%16h|PASS", x1_i, x1_p8, x1_cmp);
		else 				 $display("%16h|%16h|%16h|FAILED", x1_i, x1_p8, x1_cmp);
		if (x2_p8 == x2_cmp) $display("%16h|%16h|%16h|PASS", x2_i, x2_p8, x2_cmp);
		else 				 $display("%16h|%16h|%16h|FAILED", x2_i, x2_p8, x2_cmp);
		if (x3_p8 == x3_cmp) $display("%16h|%16h|%16h|PASS", x3_i, x3_p8, x3_cmp);
		else 				 $display("%16h|%16h|%16h|FAILED", x3_i, x3_p8, x3_cmp);
		if (x4_p8 == x4_cmp) $display("%16h|%16h|%16h|PASS", x4_i, x4_p8, x4_cmp);
		else 				 $display("%16h|%16h|%16h|FAILED", x4_i, x4_p8, x4_cmp);
		#1;
	end

	$display("TEST PERMUTATION P12");
	$display("input		|output		|expect		|");
	for (i = 0; i < 50; i = i + 1) begin
		x0_i[31:0] = $urandom; x0_i[63:32] = $urandom;
		x1_i[31:0] = $urandom; x1_i[63:32] = $urandom;
		x2_i[31:0] = $urandom; x2_i[63:32] = $urandom;
		x3_i[31:0] = $urandom; x3_i[63:32] = $urandom;
		x4_i[31:0] = $urandom; x4_i[63:32] = $urandom;

		calculate_permutation(12, x0_i, x1_i, x2_i, x3_i, x4_i, x0_cmp, x1_cmp, x2_cmp, x3_cmp, x4_cmp);
		#1;
		$display("============case %2d===============", i);
		if (x0_p12 == x0_cmp) $display("%16h|%16h|%16h|PASS", x0_i, x0_p12, x0_cmp);
		else 				 $display("%16h|%16h|%16h|FAILED", x0_i, x0_p12, x0_cmp);
		if (x1_p12 == x1_cmp) $display("%16h|%16h|%16h|PASS", x1_i, x1_p12, x1_cmp);
		else 				 $display("%16h|%16h|%16h|FAILED", x1_i, x1_p12, x1_cmp);
		if (x2_p12 == x2_cmp) $display("%16h|%16h|%16h|PASS", x2_i, x2_p12, x2_cmp);
		else 				 $display("%16h|%16h|%16h|FAILED", x2_i, x2_p12, x2_cmp);
		if (x3_p12 == x3_cmp) $display("%16h|%16h|%16h|PASS", x3_i, x3_p12, x3_cmp);
		else 				 $display("%16h|%16h|%16h|FAILED", x3_i, x3_p12, x3_cmp);
		if (x4_p12 == x4_cmp) $display("%16h|%16h|%16h|PASS", x4_i, x4_p12, x4_cmp);
		else 				 $display("%16h|%16h|%16h|FAILED", x4_i, x4_p12, x4_cmp);
		#1;
	end

	// x0_i = 64'h0;
	// x1_i = 64'h0;
	// x2_i = 64'h0;
	// x3_i = 64'h0;
	// x4_i = 64'h0;
	
	// calculate_permutation(6, x0_i, x1_i, x2_i, x3_i, x4_i, x0_cmp, x1_cmp, x2_cmp, x3_cmp, x4_cmp);

	// #1;

	// $display("======input=====");
	// $display("x0_i = %16h",x0_i);
	// $display("x1_i = %16h",x1_i);
	// $display("x2_i = %16h",x2_i);
	// $display("x3_i = %16h",x3_i);
	// $display("x4_i = %16h",x4_i);

	// $display("======output=====");
	// $display("x0_o = %16h",x0_cmp);
	// $display("x1_o = %16h",x1_cmp);
	// $display("x2_o = %16h",x2_cmp);
	// $display("x3_o = %16h",x3_cmp);
	// $display("x4_o = %16h",x4_cmp);

	#10;
	$finish;
end

task calculate_permutation;
    input int rounds;
    input logic [63:0] x0_i, x1_i, x2_i, x3_i, x4_i;
    output logic [63:0] x0_o, x1_o, x2_o, x3_o, x4_o;

    logic [63:0] x [4:0];
    logic [63:0] T [4:0];
    logic [63:0] x0_sr19, x0_sr28, x1_sr61, x1_sr39, x2_sr1, x2_sr6, x3_sr10, x3_sr17, x4_sr7, x4_sr41;
    
    integer r, i;

    begin
        // Gán giá trị đầu vào
        x[0] = x0_i;
        x[1] = x1_i;
        x[2] = x2_i;
        x[3] = x3_i;
        x[4] = x4_i;

        // Kiểm tra giá trị rounds
        if (rounds > 12 || rounds < 0) begin
            $error("Invalid number of rounds: %0d", rounds);
        end

        for (r = 12 - rounds; r < 12; r = r + 1) begin
            // --- add round constants ---
            x[2] ^= (64'hf0 - r * 64'h10 + r * 64'h1);


            // --- substitution layer ---
            x[0] ^= x[4];
            x[4] ^= x[3];
            x[2] ^= x[1];

            for (i = 0; i < 5; i = i + 1) begin
                T[i] = (x[i] ^ 64'hFFFF_FFFF_FFFF_FFFF) & x[(i+1)%5];
            end

            for (i = 0; i < 5; i = i + 1) begin
                x[i] = x[i] ^ T[(i+1)%5];
            end

            x[1] ^= x[0];
            x[0] ^= x[4];
            x[3] ^= x[2];
            x[2] ^= 64'hFFFF_FFFF_FFFF_FFFF;

            // --- linear diffusion layer ---
            x0_sr19 = {x[0][18:0], x[0][63:19]};
            x0_sr28 = {x[0][27:0], x[0][63:28]};
            x1_sr61 = {x[1][60:0], x[1][63:61]};
            x1_sr39 = {x[1][38:0], x[1][63:39]};
            x2_sr1  = {x[2][0], x[2][63:1]};
            x2_sr6  = {x[2][5:0], x[2][63:6]};
            x3_sr10 = {x[3][9:0], x[3][63:10]};
            x3_sr17 = {x[3][16:0], x[3][63:17]};
            x4_sr7  = {x[4][6:0], x[4][63:7]};
            x4_sr41 = {x[4][40:0], x[4][63:41]};

            x[0] = x[0] ^ x0_sr19 ^ x0_sr28;
        	x[1] = x[1] ^ x1_sr61 ^ x1_sr39;
        	x[2] = x[2] ^ x2_sr1 ^ x2_sr6;
        	x[3] = x[3] ^ x3_sr10 ^ x3_sr17;
        	x[4] = x[4] ^ x4_sr7 ^ x4_sr41;
        end

        // Gán giá trị đầu ra
        x0_o = x[0];
        x1_o = x[1];
        x2_o = x[2];
        x3_o = x[3];
        x4_o = x[4];
    end
endtask


endmodule
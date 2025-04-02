`timescale 1ns/1ps
module test_new;

	reg x0_i, x1_i, x2_i, x3_i, x4_i;
	reg x0_rc, x1_rc, x2_rc, x3_rc, x4_rc;
	reg a, b, c, d, e, f, g, h, i, j;
	reg x0_s, x1_s, x2_s, x3_s, x4_s;
	reg rc;
	parameter one = 1;

	bit [5:0] value;
	initial begin
		$display("rc\tx4_i\tx3_i\tx2_i\tx1_i\tx0_i\tx4_s\tx3_s\tx2_s\tx1_s\tx0_s\t");
		for (int count = 0; count < 64; count = count + 1) begin
			value = count[5:0];
			rc = count[5];

			x0_i = count[0];
			x1_i = count[1];
			x2_i = count[2];
			x3_i = count[3];
			x4_i = count[4];

			x0_rc = x0_i;
			x1_rc = x1_i;
			x2_rc = x2_i ^ rc;
			x3_rc = x3_i;
			x4_rc = x4_i;

			a = ((x0_rc ^ x4_rc) ^ one) & x1_rc;
			b = (x1_rc ^ one) & (x2_rc ^ x1_rc);
			c = ((x2_rc ^ x1_rc) ^ one) & x3_rc;
			d = (x3_rc ^ one) & (x4_rc ^ x3_rc);
			e = ((x4_rc ^ x3_rc) ^ one) & (x0_rc ^ x4_rc);
			f = (x0_rc ^ x4_rc) ^ b;
			g = x1_rc ^ c;
			h = (x2_rc ^ x1_rc) ^ d;
			i = x3_rc ^ e;
			j = (x4_rc ^ x3_rc) ^ a;

			x0_s = f ^ j;
			x1_s = g ^ f;
			x2_s = h ^ one;
			x3_s = i ^ h;
			x4_s = j;

			$display("%b\t%b\t%b\t%b\t%b\t%b\t%b\t%b\t%b\t%b\t%b\t", rc, x4_i, x3_i, x2_i, x1_i, x0_i, x4_s, x3_s, x2_s, x1_s, x0_s);
		end
	end
endmodule
`timescale 1ns/1ps
module test_ascon_process_associated_data;
	reg clk, rst_n;

	reg [32:0] associated_data_length;
	reg [32:0] data_position;

	reg [63:0] associated_data;

	reg [63:0] x0_i;
	reg [63:0] x1_i;
	reg [63:0] x2_i;
	reg [63:0] x3_i;
	reg [63:0] x4_i;

	wire [63:0] x0_o;
	wire [63:0] x1_o;
	wire [63:0] x2_o;
	wire [63:0] x3_o;
	wire [63:0] x4_o;

	ascon_process_associated_data ascon_process_associated_data_dut(.*);

	always #50 clk = ~clk;

	initial begin
		clk = 0;
		rst_n = 0;
		associated_data_length = 0;
		data_position = 0;
		associated_data = 0;
		x0_i = 0;
		x1_i = 0;
		x2_i = 0;
		x3_i = 0;
		x4_i = 0;
	end

	initial begin
		#10;
		rst_n = 1;
		#10;

		associated_data_length = 20;
		data_position = 0;
		associated_data = 64'h4153434F4E656E63; // "ASCONenc"
		x0_i = 64'hb8dff46b0db421f8;
		x1_i = 64'hed0232a7c68ded74;
		x2_i = 64'h138a46b172b225f9;
		x3_i = 64'hfa8eaaaac685d26a;
		x4_i = 64'hf044217fbe57e755;
		#100;
		$display("=========================");
		$display("x0 = %16h",x0_o);
		$display("x1 = %16h",x1_o);
		$display("x2 = %16h",x2_o);
		$display("x3 = %16h",x3_o);
		$display("x4 = %16h",x4_o);

		associated_data_length = 20;
		data_position = 8;
		associated_data = 64'h4153434F4E656E63; // "ASCONenc"
		x0_i = x0_o;
		x1_i = x0_o;
		x2_i = x0_o;
		x3_i = x0_o;
		x4_i = x0_o;
		#100;
		$display("=========================");
		$display("x0 = %16h",x0_o);
		$display("x1 = %16h",x1_o);
		$display("x2 = %16h",x2_o);
		$display("x3 = %16h",x3_o);
		$display("x4 = %16h",x4_o);

		associated_data_length = 20;
		data_position = 16;
		associated_data = 64'h4153434F4E656E63; // "ASCONenc"
		x0_i = x0_o;
		x1_i = x0_o;
		x2_i = x0_o;
		x3_i = x0_o;
		x4_i = x0_o;
		#100;
		$display("=========================");
		$display("x0 = %16h",x0_o);
		$display("x1 = %16h",x1_o);
		$display("x2 = %16h",x2_o);
		$display("x3 = %16h",x3_o);
		$display("x4 = %16h",x4_o);

		associated_data_length = 20;
		data_position = 24;
		associated_data = 64'h4153434F4E656E63; // "ASCONenc"
		x0_i = x0_o;
		x1_i = x0_o;
		x2_i = x0_o;
		x3_i = x0_o;
		x4_i = x0_o;
		#100;

		#100 $finish;

	end

	initial begin
		$dumpfile("wave.vcd");
		$dumpvars;
	end

endmodule
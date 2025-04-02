module ascon (
	input wire iclk,    // Clock
	input wire irst_n,  // Asynchronous reset active low
	
	input wire [31:0] idata_in,
	input wire [7:0] iaddress,
	input wire ics,
	input wire iwe,

	output wire [31:0] odata_out
);

parameter ADDR_CTRL = 8'h00;
parameter ADDR_STATUS = 8'h01;

parameter ADDR_KEY_0  = 8'h02;
parameter ADDR_KEY_1  = 8'h03;
parameter ADDR_KEY_2  = 8'h04;
parameter ADDR_KEY_3  = 8'h05;

parameter ADDR_NONCE_0  = 8'h6;
parameter ADDR_NONCE_1  = 8'h7;
parameter ADDR_NONCE_2  = 8'h8;
parameter ADDR_NONCE_3  = 8'h9;

parameter ADDR_DATA_IN_0 = 8'h0A;
parameter ADDR_DATA_IN_1 = 8'h0B;
parameter ADDR_DATA_IN_2 = 8'h0C;
parameter ADDR_DATA_IN_3 = 8'h0D;

parameter ADDR_DATA_OUT_0 = 8'h0E;
parameter ADDR_DATA_OUT_1 = 8'h0F;
parameter ADDR_DATA_OUT_2 = 8'h10;
parameter ADDR_DATA_OUT_3 = 8'h11;

parameter ADDR_TAG_0 = 8'h12;
parameter ADDR_TAG_1 = 8'h13;
parameter ADDR_TAG_2 = 8'h14;
parameter ADDR_TAG_3 = 8'h15;

parameter ADDR_LENGTH =  8'h16;
parameter ADDR_POSITION =  8'h17;

reg [31:0] ctrl_reg;
reg [31:0] status_reg;
reg [31:0] key_reg [3:0];
reg [31:0] nonce_reg [3:0];
reg [31:0] data_in_reg [3:0];
reg [31:0] data_out_reg [3:0];
reg [31:0] tag_reg [3:0];
reg [31:0] length_reg;
reg [31:0] position_reg;

wire [31:0] sel_data_out_address;
wire done_core, err_core;
wire [127:0] data_in_core, data_out_core, key_core, nonce_core, tag_core;
wire [127:0] data_in_temp, key_temp, nonce_temp, data_out_temp, tag_temp;

always @(posedge iclk or negedge irst_n) begin
	if(~irst_n) begin
		ctrl_reg <= 32'h0;
		status_reg <= 32'h0;
		key_reg[0] <= 32'h0;
		key_reg[1] <= 32'h0;
		key_reg[2] <= 32'h0;
		key_reg[3] <= 32'h0;
		nonce_reg[0] <= 32'h0;
		nonce_reg[1] <= 32'h0;
		nonce_reg[2] <= 32'h0;
		nonce_reg[3] <= 32'h0;
		data_in_reg[0] <= 32'h0;
		data_in_reg[1] <= 32'h0;
		data_in_reg[2] <= 32'h0;
		data_in_reg[3] <= 32'h0;
		data_out_reg[0] <= 32'h0;
		data_out_reg[1] <= 32'h0;
		data_out_reg[2] <= 32'h0;
		data_out_reg[3] <= 32'h0;
		tag_reg[0] <= 32'h0;
		tag_reg[1] <= 32'h0;
		tag_reg[2] <= 32'h0;
		tag_reg[3] <= 32'h0;
		length_reg <= 32'h0;
		position_reg <= 32'h0;
	end else begin
		if (ics & iwe) begin
			case (iaddress)
				ADDR_CTRL: ctrl_reg <= idata_in;
				ADDR_KEY_0: key_reg[0] <= idata_in; 
				ADDR_KEY_1: key_reg[1] <= idata_in;
				ADDR_KEY_2: key_reg[2] <= idata_in;
				ADDR_KEY_3: key_reg[3] <= idata_in;
				ADDR_NONCE_0: nonce_reg[0] <= idata_in;
				ADDR_NONCE_1: nonce_reg[1] <= idata_in;
				ADDR_NONCE_2: nonce_reg[2] <= idata_in;
				ADDR_NONCE_3: nonce_reg[3] <= idata_in;
				ADDR_DATA_IN_0: data_in_reg[0] <= idata_in;
				ADDR_DATA_IN_1: data_in_reg[1] <= idata_in;
				ADDR_DATA_IN_2: data_in_reg[2] <= idata_in;
				ADDR_DATA_IN_3: data_in_reg[3] <= idata_in;
				ADDR_LENGTH: length_reg <= idata_in;
				ADDR_POSITION: position_reg<= idata_in;
				default: ;
			endcase
		end

		//from core to reg
		status_reg[1:0] <= {err_core, done_core};
		data_out_reg[0] <= data_in_temp[31:0];
		data_out_reg[1] <= data_in_temp[63:32];
		data_out_reg[2] <= data_in_temp[95:64];
		data_out_reg[3] <= data_in_temp[127:96];

		tag_reg[0] <= tag_temp[31:0];
		tag_reg[1] <= tag_temp[63:32];
		tag_reg[2] <= tag_temp[95:64];
		tag_reg[3] <= tag_temp[127:96];
	end
end

assign odata_out = (ics & ~iwe) ? sel_data_out_address : 32'h0;
assign sel_data_out_address = 	(iaddress == ADDR_CTRL) ? ctrl_reg :
								(iaddress == ADDR_STATUS) ? status_reg :
								(iaddress == ADDR_KEY_0) ? key_reg[0] :
								(iaddress == ADDR_KEY_1) ? key_reg[1] :
								(iaddress == ADDR_KEY_2) ? key_reg[2] :
								(iaddress == ADDR_KEY_3) ? key_reg[3] :
								(iaddress == ADDR_NONCE_0) ? nonce_reg[0] :
								(iaddress == ADDR_NONCE_1) ? nonce_reg[1] :
								(iaddress == ADDR_NONCE_2) ? nonce_reg[2] :
								(iaddress == ADDR_NONCE_3) ? nonce_reg[3] :
								(iaddress == ADDR_DATA_IN_0) ? data_in_reg[0] :
								(iaddress == ADDR_DATA_IN_1) ? data_in_reg[1] :
								(iaddress == ADDR_DATA_IN_2) ? data_in_reg[2] :
								(iaddress == ADDR_DATA_IN_3) ? data_in_reg[3] :
								(iaddress == ADDR_DATA_OUT_0) ? data_out_reg[0] :
								(iaddress == ADDR_DATA_OUT_1) ? data_out_reg[1] :
								(iaddress == ADDR_DATA_OUT_2) ? data_out_reg[2] :
								(iaddress == ADDR_DATA_OUT_3) ? data_out_reg[3] :
								(iaddress == ADDR_TAG_0) ? tag_reg[0] :
								(iaddress == ADDR_TAG_1) ? tag_reg[1] :
								(iaddress == ADDR_TAG_2) ? tag_reg[2] :
								(iaddress == ADDR_TAG_3) ? tag_reg[3] :
								(iaddress == ADDR_LENGTH) ? length_reg :
								(iaddress == ADDR_POSITION) ? position_reg : 32'h0;

assign data_in_temp = {data_in_reg[3], data_in_reg[2], data_in_reg[1], data_in_reg[0]};
assign data_in_core = {data_in_temp[71:64],data_in_temp[79:72],data_in_temp[87:80],data_in_temp[95:88],data_in_temp[103:96],data_in_temp[111:104],data_in_temp[119:112],data_in_temp[127:120],data_in_temp[7:0],data_in_temp[15:8],data_in_temp[23:16],data_in_temp[31:24],data_in_temp[39:32],data_in_temp[47:40],data_in_temp[55:48],data_in_temp[63:56]};

assign key_temp = {key_reg[3],key_reg[2],key_reg[1],key_reg[0]};
assign key_core = {key_temp[71:64],key_temp[79:72],key_temp[87:80],key_temp[95:88],key_temp[103:96],key_temp[111:104],key_temp[119:112],key_temp[127:120],key_temp[7:0],key_temp[15:8],key_temp[23:16],key_temp[31:24],key_temp[39:32],key_temp[47:40],key_temp[55:48],key_temp[63:56]};

assign nonce_temp = {nonce_reg[3],nonce_reg[2],nonce_reg[1],nonce_reg[0]};
assign nonce_core = {nonce_temp[71:64],nonce_temp[79:72],nonce_temp[87:80],nonce_temp[95:88],nonce_temp[103:96],nonce_temp[111:104],nonce_temp[119:112],nonce_temp[127:120],nonce_temp[7:0],nonce_temp[15:8],nonce_temp[23:16],nonce_temp[31:24],nonce_temp[39:32],nonce_temp[47:40],nonce_temp[55:48],nonce_temp[63:56]};

assign data_out_temp = {data_out_core[71:64],data_out_core[79:72],data_out_core[87:80],data_out_core[95:88],data_out_core[103:96],data_out_core[111:104],data_out_core[119:112],data_out_core[127:120],data_out_core[7:0],data_out_core[15:8],data_out_core[23:16],data_out_core[31:24],data_out_core[39:32],data_out_core[47:40],data_out_core[55:48],data_out_core[63:56]};

assign tag_temp = {tag_core[7:0],tag_core[15:8],tag_core[23:16],tag_core[31:24],tag_core[39:32],tag_core[47:40],tag_core[55:48],tag_core[63:56],tag_core[71:64],tag_core[79:72],tag_core[87:80],tag_core[95:88],tag_core[103:96],tag_core[111:104],tag_core[119:112],tag_core[127:120]};

ascon_core ascon_core_module(
	.clk(iclk),
	.rst_n(irst_n),
	
	.key(key_core),
	.nonce(nonce_core),

	.sel_type(ctrl_reg[6:5]),
	.mode_sel_encrypt_decrypt(ctrl_reg[7]),

	.data_length(length_reg),
	.data_position(position_reg),
	.data_in(data_in_core),
	.data_out(data_out_core),

	.process_en_init(ctrl_reg[0]),
	.process_en_AD_AM(ctrl_reg[1]),
	.process_en_encrypt_decrypt(ctrl_reg[2]),
	.process_en_hash(ctrl_reg[3]),
	.process_en_final(ctrl_reg[4]),

	.tag(tag_core),
	.done(done_core),

	.err(err_core)
);

endmodule
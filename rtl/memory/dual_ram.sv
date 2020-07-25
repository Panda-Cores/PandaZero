// ------------------------ Disclaimer -----------------------
// No warranty of correctness, synthesizability or 
// functionality of this code is given.
// Use this code under your own risk.
// When using this code, copy this disclaimer at the top of 
// Your file
//
// (c) Luca Hanel 2020
//
// ------------------------------------------------------------
//
// Module name: dual_ram
// 
// Functionality: Simple ram with dual read, single write ports
//
// ------------------------------------------------------------

module dual_ram #(
    parameter SIZE = 1024
)(
    input logic           clk,
    input logic           rstn_i,
    // First port, read only
    input logic [31:0]    addra_i,
    input logic           ena_i,
    output logic [31:0]   douta_o,
    // Second port, read & write
    input logic [31:0]    addrb_i,
    input logic           enb_i,
    input logic [3:0]     web_i,
    input logic [31:0]    dinb_i,
    output logic [31:0]   doutb_o
);

logic [31:0]    addra;
logic [31:0]    addrb;

(*ram_style = "block" *) reg [31:0] data[SIZE];

initial begin
    data['h0]      = 32'b00000000010000_00000_000_00001_0010011;     // addi 16, x0, x1;
    data['h1]      = 32'b00000000000001_00010_000_00010_0010011;     // addi 1, x2, x2;
    data['h2]      = 32'b1111111_00001_00010_100_11101_1100011;    // blt x2, x1, -2
    data['h3]      = 32'b0000011_00010_00000_000_00000_0100011;     // sw x2, 64+x0;
    data['h4]      = 32'b00000000000001_00010_000_00010_0010011;     // addi 1, x2, x2;
    data['h5]      = 32'b00000000000001_00011_000_00011_0010011;     // addi 1, x3, x3;
    data['h6]      = 32'b00000000000001_00100_000_00100_0010011;     // addi 1, x4, x4;
    data['h7]      = 32'b00000000000001_00101_000_00101_0010011;     // addi 1, x5, x5;
    data['h8]      = 32'b00000000000001_00110_000_00110_0010011;     // addi 1, x6, x6;
    data['h9]      = 32'b0000011_00010_00000_010_00000_0100011;     // sw x2, 64+x0;
    data['ha]      = 32'b0000011_00011_00000_010_00100_0100011;     // sw x3, 68+x0;
    data['hb]      = 32'b0000011_00100_00000_010_01000_0100011;     // sw x4, 72+x0;
    data['hc]      = 32'b0000011_00101_00000_010_01100_0100011;     // sw x5, 76+x0;
    data['hd]      = 32'b0000011_00110_00000_010_10000_0100011;     // sw x5, 80+x0;
    data['he]      = 32'b00000000000001_00010_000_00010_0010011;     // addi 1, x2, x2;
    data['hf]      = 32'b00000000000001_00011_000_00011_0010011;     // addi 1, x3, x3;
    data['h10]     = 32'b00000000000001_00100_000_00100_0010011;     // addi 1, x4, x4;
    data['h11]     = 32'b00000000000001_00101_000_00101_0010011;     // addi 1, x5, x5;
    data['h12]     = 32'b00000000000001_00110_000_00110_0010011;     // addi 1, x6, x6;
    data['h13]     = 32'b0000011_00010_00000_010_00000_0100011;     // sw x2, 64+x0;
    data['h14]     = 32'b0000011_00011_00000_010_00100_0100011;     // sw x3, 68+x0;
    data['h15]     = 32'b0000011_00100_00000_010_01000_0100011;     // sw x4, 72+x0;
    data['h16]     = 32'b0000011_00101_00000_010_01100_0100011;     // sw x5, 76+x0;
    data['h17]     = 32'b0000011_00110_00000_010_10000_0100011;     // sw x5, 80+x0;
end

assign addra = $signed(addra_i >> 2);
assign addrb = $signed(addrb_i >> 2);

always_comb
begin
    if(ena_i)
        douta_o = data[addra];

    if(enb_i)
        doutb_o = data[addrb];
end

always_ff @(posedge clk, negedge rstn_i)
begin
    if(!rstn_i) begin
    end else begin
        if(enb_i) begin
            case(web_i)
                4'b1111:
                    data[addrb] <= dinb_i;
                
                4'b0011:
                    data[addrb][15:0] <= dinb_i[15:0];
                
                4'b0001:
                    data[addrb][7:0] <= dinb_i[7:0];
                
                default: begin
                end
            endcase
        end
    end
end

endmodule
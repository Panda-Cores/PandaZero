// ---------------RISCV-Luca---------------
// 
// Module:          mem
// 
// Functionality:   temporary memory
// 
// -------------(c) Luca Hanel-------------

module mem
#(
    parameter BITSIZE = 32,
    parameter WORDSIZE = 8,
    parameter MEM_SIZE = 1024
)(
    // input                                       clk,
    // input                                       resetn_i,
    input [31 : 0]                              mem_addr_i,
    /* verilator lint_off ALWCOMBORDER */
    /* verilator lint_off UNOPTFLAT */
    input [BITSIZE - 1:0]  mem_data_i,
    output [BITSIZE - 1:0] mem_data_o,
    /* verilator lint_on ALWCOMBORDER */
    /* verilator lint_on UNOPTFLAT */
    input                                       mem_write_i,
    input [1 : 0]                               mem_write_size_i,
    input                                       mem_valid_i,
    output                                      mem_valid_o
);

    /* verilator lint_off UNOPTFLAT */
logic [WORDSIZE - 1:0]  memory[MEM_SIZE];
   /* verilator lint_on UNOPTFLAT */

always_comb
begin
    mem_valid_o = 1'b0;
    if(mem_valid_i)
    begin
        case(mem_write_i)
        '1: begin //write
            memory[mem_addr_i[$clog2(MEM_SIZE) - 1 : 0]] = mem_data_i[WORDSIZE - 1 : 0];
            if(mem_write_size_i[0]) begin
                memory[mem_addr_i[$clog2(MEM_SIZE) - 1 : 0] + 1] = mem_data_i[(2 * WORDSIZE) - 1 : WORDSIZE];
            end
            if(mem_write_size_i[1]) begin
                memory[mem_addr_i[$clog2(MEM_SIZE) - 1 : 0] + 2] = mem_data_i[(3 * WORDSIZE) - 1 : 2 * WORDSIZE];
                memory[mem_addr_i[$clog2(MEM_SIZE) - 1 : 0] + 3] = mem_data_i[(4 * WORDSIZE) - 1 : 3 * WORDSIZE];
                
            end
            mem_valid_o = 1'b1;
        end

        '0: begin //read
            mem_valid_o = 1'b1;
            mem_data_o[WORDSIZE - 1 : 0] = memory[{mem_addr_i[$clog2(MEM_SIZE) - 1 : 2], 2'b00}];
            mem_data_o[(2 * WORDSIZE) - 1 : WORDSIZE] = memory[{mem_addr_i[$clog2(MEM_SIZE) - 1 : 2], 2'b01}];
            mem_data_o[(3 * WORDSIZE) - 1 : 2*WORDSIZE] = memory[{mem_addr_i[$clog2(MEM_SIZE) - 1 : 2], 2'b10}];
            mem_data_o[(4 * WORDSIZE) - 1 : 3*WORDSIZE] = memory[{mem_addr_i[$clog2(MEM_SIZE) - 1 : 2], 2'b11}];
        end
        endcase
    end
end

initial begin
    {>>{memory['h3], memory['h2], memory['h1], memory['h0]}} = 32'b01111100011111111110_00101_0110111;   //lui imm x5;   0x7c7fe2b7
    {>>{memory['h7], memory['h6], memory['h5], memory['h4]}} = 32'b000000000010_00011_000_00011_0010011; //addi 2, x3    0x00218193
    {>>{memory['hb], memory['ha], memory['h9], memory['h8]}} = 32'b0000000_0011_00000_000_00000_0100011; //sb x5, imm+x0 0x00500023
    {>>{memory['hf], memory['he], memory['hd], memory['hc]}} = 32'b000000000001_01000_000_00011_0000011; //lb 1+x8, x3   0x00140183
end

endmodule
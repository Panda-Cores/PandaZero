// ---------------RISCV-Luca---------------
// 
// Module:          mem
// 
// Functionality:   temporary memory
// 
// -------------(c) Luca Hanel-------------

module memory
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
    input [BITSIZE - 1:0]                       mem_data_i,
    output [BITSIZE - 1:0]                      mem_data_o,
    /* verilator lint_on ALWCOMBORDER */
    /* verilator lint_on UNOPTFLAT */
    input                                       mem_write_i,
    input [1 : 0]                               mem_write_size_i,
    input                                       mem_valid_i,
    output                                      mem_valid_o
);

    /* verilator lint_off UNOPTFLAT */
logic [WORDSIZE - 1:0]  memory[MEM_SIZE];
logic [BITSIZE - 1 : 0] mem_data;
   /* verilator lint_on UNOPTFLAT */
logic                   mem_valid;

assign mem_data_o = mem_data;
assign mem_valid_o = mem_valid;


always_comb
begin
    mem_valid = 1'b0;
    if(mem_valid_i)
    begin
        case(mem_write_i)
        '1: begin //write
            memory[{mem_addr_i[$clog2(MEM_SIZE) - 1 : 2], 2'b00}] = mem_data_i[WORDSIZE - 1 : 0];
            if(mem_write_size_i[0] || mem_write_size_i[1]) begin
                memory[{mem_addr_i[$clog2(MEM_SIZE) - 1 : 2], 2'b01}] = mem_data_i[(2 * WORDSIZE) - 1 : WORDSIZE];
            end
            if(mem_write_size_i[1]) begin
                memory[{mem_addr_i[$clog2(MEM_SIZE) - 1 : 2], 2'b10}] = mem_data_i[(3 * WORDSIZE) - 1 : 2 * WORDSIZE];
                memory[{mem_addr_i[$clog2(MEM_SIZE) - 1 : 2], 2'b11}] = mem_data_i[(4 * WORDSIZE) - 1 : 3 * WORDSIZE];
                
            end
            mem_valid = 1'b1;
        end

        '0: begin //read
            mem_valid = 1'b1;
            mem_data[WORDSIZE - 1 : 0] = memory[{mem_addr_i[$clog2(MEM_SIZE) - 1 : 2], 2'b00}];
            mem_data[(2 * WORDSIZE) - 1 : WORDSIZE] = memory[{mem_addr_i[$clog2(MEM_SIZE) - 1 : 2], 2'b01}];
            mem_data[(3 * WORDSIZE) - 1 : 2*WORDSIZE] = memory[{mem_addr_i[$clog2(MEM_SIZE) - 1 : 2], 2'b10}];
            mem_data[(4 * WORDSIZE) - 1 : 3*WORDSIZE] = memory[{mem_addr_i[$clog2(MEM_SIZE) - 1 : 2], 2'b11}];
        end
        endcase
    end
end

initial begin
    {>>{memory['h3], memory['h2], memory['h1], memory['h0]}} = 32'b000000010000_00000_000_00001_0010011; //addi 16, x0, x1;
    {>>{memory['h7], memory['h6], memory['h5], memory['h4]}} = 32'b000000000001_00010_000_00010_0010011; //addi 1, x2, x2;
    {>>{memory['hb], memory['ha], memory['h9], memory['h8]}} = 32'b1111111_00001_00010_100_11101_1100011; //blt x2, x1, -2
    {>>{memory['hf], memory['he], memory['hd], memory['hc]}} = 32'b000000_00010_00000_010_11000_0100011; //sw x2, 24+x0;
end

endmodule
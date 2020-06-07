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
    parameter N_WORDS_PER_ADDR = 4,
    parameter MEM_SIZE = 1024
)(
    // input                                       clk,
    // input                                       resetn_i,
    input [31 : 0]                              mem_addr_i,
    /* verilator lint_off ALWCOMBORDER */
    /* verilator lint_off UNOPTFLAT */
    input [(N_WORDS_PER_ADDR * BITSIZE) - 1:0]  mem_data_i,
    output [(N_WORDS_PER_ADDR * BITSIZE) - 1:0] mem_data_o,
    /* verilator lint_on ALWCOMBORDER */
    /* verilator lint_on UNOPTFLAT */
    input                                       mem_store_i,
    input                                       mem_valid_i,
    output                                      mem_valid_o
);

    /* verilator lint_off UNOPTFLAT */
logic [(N_WORDS_PER_ADDR * BITSIZE) - 1:0]  memory[MEM_SIZE / N_WORDS_PER_ADDR];
   /* verilator lint_on UNOPTFLAT */
assign mem_data_o = memory[mem_addr_i[$clog2(MEM_SIZE) - 1 : $clog2(N_WORDS_PER_ADDR)]];

always_comb
begin
    mem_valid_o = 1'b0;
    if(mem_valid_i)
    begin
        case(mem_store_i)
        '1: begin //Store
            memory[mem_addr_i[$clog2(MEM_SIZE) - 1 : $clog2(N_WORDS_PER_ADDR)]] = mem_data_i;
            mem_valid_o = 1'b1;
        end

        '0: begin //LOAD
            mem_valid_o = 1'b1;
        end
        endcase
    end
end

initial begin
    memory[0][BITSIZE - 1 : 0]                  = 32'b01111100011111111110001010110111;
    // memory[0][(2 * BITSIZE) - 1 : BITSIZE]      = BITSIZE'b00000000000100011000000110010011;
    // memory[0][(3 * BITSIZE) - 1 : 2 * BITSIZE]  = BITSIZE'b11111100011111111110001010110111;
    // memory[0][(4 * BITSIZE) - 1 : 3 * BITSIZE]  = BITSIZE'b00000000000100011000000110010011;

    // memory[1][BITSIZE - 1 : 0]                  = 32'b00111100011111111110001010110111;
    // memory[1][(2 * BITSIZE) - 1 : BITSIZE]      = BITSIZE'b00000000001000011000000110010011;
    memory[1][BITSIZE - 1 : 0]      = 32'b00000000001000011000000110010011;
    // memory[1][(3 * BITSIZE) - 1 : 2 * BITSIZE]  = BITSIZE'b10111100011111111110001010110111;
    // memory[1][(4 * BITSIZE) - 1 : 3 * BITSIZE]  = BITSIZE'b00000000001000011000000110010011;
    memory[2][BITSIZE - 1 : 0]                  = 32'b00000000010100000000000000100011;
    //memory[2][BITSIZE - 1 : 0]                  = 32'b00011100011111111110001010110111;
    // memory[2][(2 * BITSIZE) - 1 : BITSIZE]      = BITSIZE'b00000000001100011000000110010011;
    // memory[2][(3 * BITSIZE) - 1 : 2 * BITSIZE]  = BITSIZE'b10011100011111111110001010110111;
    // memory[2][(4 * BITSIZE) - 1 : 3 * BITSIZE]  = BITSIZE'b00000000001100011000000110010011;
    memory[3][BITSIZE - 1 : 0]      = 32'b00000000000101000000000110000011;
                                        //   000000000000
end

endmodule
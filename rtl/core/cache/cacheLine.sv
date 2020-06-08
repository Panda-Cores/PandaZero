// ---------------RISCV-Luca---------------
// 
// Module:          IF
// 
// Functionality:   Instruction fetch pipeline stage
// 
// -------------(c) Luca Hanel-------------

module cacheLine
#(
    parameter N_CACHELINE_LENGTH = 4
    parameter BITSIZE = 32,
    parameter TAGSIZE = BITSIZE - $clog2(N_CACHELINE_LENGTH)

)(
    input [BITSIZE - 1: 0]                  addr_i,
    input [(BITSIZE * N_CACHELINE_LENGTH) : 0]  data_i,
    input                                   store_i,
    output                                  hit_o,
    output [BITSIZE - 1: 0]                 data_o
)

logic [TAGSIZE - 1 : 0]     tag;

logic [BITSIZE : 0]     cache_line [N_CACHELINE_LENGTH]

logic                       incr_offset;

logic [$clog2(N_CACHELINE_LENGTH) - 1 : 0] offset;

genvar ii;

enum {LOAD, STORE} CS, NS;

// Read cache line
always_comb
begin
    hit_o = 'b0;
    if(!store_i && addr_i[BITSIZE - 1 : TAGSIZE] == tag)
    begin
        hit_o = 1'b1;
        data_o = cache_line[addr_i[$clog2(N_CACHELINE_LENGTH)- 1 : 0]];
    end
end

// Replace cache line
always_comb
begin
    if(store_i)
    begin
        tag = addr_i[BITSIZE - 1 : TAGSIZE];
        for(ii = 0; ii < N_CACHELINE_LENGTH; ii = ii + 1) begin
            cache_line[addr_i[$clog2(N_CACHELINE_LENGTH)- 1 : 0] + ii] = data_i[((ii + 1) * BITSIZE) - 1 : ii* BITSIZE]
        end
    end
end

endmodule
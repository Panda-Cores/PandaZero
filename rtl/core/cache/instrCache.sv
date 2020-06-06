// ---------------RISCV-Luca---------------
// 
// Module:          IF
// 
// Functionality:   Instruction fetch pipeline stage
// 
// -------------(c) Luca Hanel-------------

module cacheSet
#(
    parameter N_CACHELINE_LENGTH = 4,
    parameter N_CACHELINES = 8,
    parameter N_CACHESETS = 1,
    parameter BITSIZE = 32,
    parameter TAGSIZE = BITSIZE - $clog2(N_CACHESETS) - $clog2(N_CACHELINE_LENGTH)
)(
    input                                   clk,
    input                                   resetn_i,
    input [31 : 0]                          addr_i,
    input [(BITSIZE * N_CACHELINE_LENGTH) - 1 : 0]  data_i,
    input [N_CACHELINES - 1 : 0]            replace,
    output                                  rd_valid_o,
    output [BITSIZE - 1 : 0]                data
    // Memory interface
);

enum {LOAD, STORE} CS, NS;

logic [N_CACHELINES : 0]                        hit_cl;

logic [(BITSIZE * N_CACHELINE_LENGTH) - 1 : 0]  data_cache_i;

logic [BITSIZE - 1 : 0]                         data_cache_o [N_CACHELINES];

always_comb
begin
    if(hit_cl != 'b0)
    begin
        
    end
end

genvar ii;
for(ii = 0; ii < N_CACHELINES; ii = ii + 1) begin
    cacheLine #(
        .N_CACHELINE_LENGTH     (   N_CACHELINE_LENGTH  ),
        .BITSIZE                (   BITSIZE             ),
        .TAGSIZE                (   TAGSIZE             )
    ) instrCL (
        .addr_i                 (   addr_cl             ),
        .data_i                 (   data_i              ),
        .store_i                (   replace_cl[ii]      ),
        .hit_o                  (   hit_cl[ii]          ),
        .data_o                 (   data_o[ii]          )
    )
end

endmodule

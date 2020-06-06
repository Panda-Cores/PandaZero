// ---------------RISCV-Luca---------------
// 
// Module:          IF
// 
// Functionality:   Instruction fetch pipeline stage
// 
// -------------(c) Luca Hanel-------------

module instrCache
#(
    parameter N_CACHELINE_LENGTH = 4,
    parameter N_CACHELINES = 8,
    parameter BITSIZE = 32,
    parameter TAGSIZE = BITSIZE - $clog2(N_CACHELINE_LENGTH)
)(
    input                                   clk,
    input                                   resetn_i,
    input [31 : 0]                          addr_i,
    input [(BITSIZE * N_CACHELINE_LENGTH) - 1 : 0]  data_i,
    output                                  rd_valid_o,
    output [31 : 0]                         instruction_o
    // Memory interface
);



genvar ii;
for(ii = 0; ii < N_CACHELINES; ii = ii + 1) begin
    cacheLine #(
        .N_CACHELINE_LENGTH     (   N_CACHELINE_LENGTH  ),
        .BITSIZE                (   BITSIZE             ),
        .TAGSIZE                (   TAGSIZE             )
    ) instrCL (
        .clk                    (   clk                 ),
        .resetn_i               (   resetn_i            ),
        .addr_i                 (   addr_cl             ),
        .data_i                 (   data_i              ),
        .store_i                (   store_cl            ),
        .hit_o                  (   hit_cl              ),
        .data_o                 (   data_o              )
    )
end

endmodule

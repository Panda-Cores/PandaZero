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
    output [BITSIZE - 1 : 0]                data_o
    // Memory interface
);

enum {SEARCH, STORE} CS, NS;

logic [N_CACHELINES : 0]                        hit_cl;

logic [(BITSIZE * N_CACHELINE_LENGTH) - 1 : 0]  data_cache_i;

logic [BITSIZE - 1 : 0]                         data_cache_o [N_CACHELINES];

genvar ii;

always_ff@(posedge clk)
begin
    if(!resetn_i)
    begin
        CS <= SEARCH;
    end
    else
    begin
        CS <= NS;
    end
end

always_comb
begin
    hit = 1'b0;
    case(CS)
        SEARCH: begin
            if(hit_cl != 'b0)
            begin
                case(hit_cl)
                    for(ii = 0; ii < N_CACHELINES; ii=ii+1)begin
                        (1 << ii): begin
                            data_o = data_o[ii];
                            hit = 1'b1;
                        end
                    end
                    default: begin
                    end
                endcase
            end
            else
            begin
               NS <= LOAD; 
            end
        end

        LOAD:begin
            
        end

        STORE: begin

        end

        default: begin
            
        end
    endcase
end

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

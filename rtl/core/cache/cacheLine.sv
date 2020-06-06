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
    input                                   clk,
    input                                   resetn_i,
    input [BITSIZE - 1: 0]                  addr_i,
    input [(BITSIZE * N_CACHELINE_LENGTH) - 1 : 0]  data_i,
    input                                   store_i,
    output                                  hit_o,
    output [BITSIZE - 1: 0]                 data_o
)

logic [TAGSIZE - 1 : 0]     tag;

logic [BITSIZE - 1 : 0]     cache [N_CACHELINE_LENGTH]

logic                       incr_offset;

logic [$clog2(N_CACHELINE_LENGTH) - 1 : 0] offset;

enum {LOAD, STORE} CS, NS;

always_ff@(posedge clk)
begin
    if(resetn_i)
    begin
        
    end
    else
    begin
        CS <= NS;
    end
end

always_comb
begin
    hit_o = 'b0;
    
    case(CS)
        LOAD: begin
            if(store_i)
            begin
                NS = STORE;
                offset = 'b0;
            end
            else
            if(addr_i[BITSIZE - 1 : TAGSIZE] == tag)
            begin
                hit_o = 1'b1;
                data_o = cache[addr_i[$clog2(N_CACHELINE_LENGTH)- 1 : 0]];
            end
        end

        STORE: begin
            tag = addr_i[BITSIZE - 1 : TAGSIZE];
            cache[addr_i[$clog2(N_CACHELINE_LENGTH)- 1 : 0]] = data_i[BITSIZE - 1 : 0]
            cache[addr_i[$clog2(N_CACHELINE_LENGTH)- 1 : 0] + 1] = data_i[(2 * BITSIZE) - 1 : BITSIZE]
            cache[addr_i[$clog2(N_CACHELINE_LENGTH)- 1 : 0] + 2] = data_i[(3 * BITSIZE) - 1 : 2 *BITSIZE]
            cache[addr_i[$clog2(N_CACHELINE_LENGTH)- 1 : 0] + 3] = data_i[(4 * BITSIZE) - 1 : 3 *BITSIZE]
            NS = LOAD;
        end

        default: begin
            
        end
    endcase
end
endmodule
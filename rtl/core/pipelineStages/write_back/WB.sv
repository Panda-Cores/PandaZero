// ---------------RISCV-Luca---------------
// 
// Module:          writeBack
// 
// Functionality:   Pipeline Stage WriteBack
// 
// -------------(c) Luca Hanel-------------

`include "instructions.sv"

module WB
#(
    BITSIZE
)(
    input                       clk,
    input                       resetn_i,
    //MEM-WB
    output                      WB_MEM_get_o,
    input                       MEM_WB_give_i,
    input [31 : 0]              MEM_WB_instruction_i,
    input [BITSIZE - 1 : 0]     MEM_WB_data_i,
    //WB-REG
    output [4:0]                WB_REG_rd_o,
    output [BITSIZE - 1 : 0]    WB_REG_d_o,
    output                      WB_REG_access_o
);

enum {GET_INSTR, WB_INSTR} CS, NS;

logic [31 : 0]                                  WB_instruction;

logic [BITSIZE - 1 : 0]                         WB_d;
    /* verilator lint_off UNOPTFLAT */
logic [4 : 0]                                   WB_REG_rd;
    /* verilator lint_on UNOPTFLAT */

logic                                           WB_MEM_get;
    /* verilator lint_off UNOPTFLAT */
logic                                           WB_REG_access;
    /* verilator lint_on UNOPTFLAT */

assign WB_REG_rd_o = WB_REG_rd;
assign WB_REG_d_o = WB_d;

assign WB_MEM_get_o = WB_MEM_get;
assign WB_REG_access_o = WB_REG_access;

always_ff@(posedge clk)
begin
    if(!resetn_i)
    begin
       CS <= GET_INSTR; 
    end
    begin
        CS <= NS;
    end
end

always_comb
begin
    WB_MEM_get     = 1'b0;
    WB_REG_access  = 1'b1;
    WB_REG_rd = 'b0;
    case(CS)
        GET_INSTR: begin
            WB_MEM_get = 1'b1;
            if(MEM_WB_give_i)
            begin
                WB_instruction  = MEM_WB_instruction_i;
                WB_d            = MEM_WB_data_i;
                NS              = WB_INSTR;
            end
        end

        WB_INSTR: begin
            case(WB_instruction[6:0])
                `LUI, `IMM_REG_ALU, `REG_REG_ALU, `LOAD: begin
                    WB_REG_rd = WB_instruction[11 : 7];
                    WB_REG_access = 1'b0;
                end
                default:
                    WB_REG_rd = 'b0;
            endcase
            
//            WB_REG_d_o = WB_d;
            NS = GET_INSTR;
        end

        default: begin
        end
    endcase
    
end
endmodule
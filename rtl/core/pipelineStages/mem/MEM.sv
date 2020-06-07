// ---------------RISCV-Luca---------------
// 
// Module:          MEM
// 
// Functionality:   Interact with memory (load/store)
// 
// -------------(c) Luca Hanel-------------

`include "instructions.sv"

module MEM#(
    parameter BITSIZE
)(
    input                               clk,
    input                               resetn_i,
    //EX-MEM
    input                               EX_MEM_give_i,
    output                              MEM_EX_get_o,
    input [31 : 0]                      EX_MEM_instr_i,
    input [31 : 0]                      EX_MEM_result_i,
    input [BITSIZE - 1 : 0]             EX_MEM_rs2_i,
    //MEM-MEM
    output [BITSIZE - 1 : 0]            MEM_addr_o,
    input [BITSIZE - 1 : 0]             MEM_data_i,
    output [BITSIZE - 1 : 0]            MEM_data_o,
    output                              MEM_read_o,
    input                               MEM_valid_i,
    output                              MEM_write_o,
    //MEM-WB
    input                               WB_MEM_get_i,
    output                              MEM_WB_give_o,
    output [31 : 0]                     MEM_WB_instr_o,
    output [BITSIZE - 1 : 0]            MEM_WB_data_o
);

enum {GET_INSTR, MEM, PROVIDE_DATA} CS, NS;
/* verilator lint_off UNOPTFLAT */
logic                                   MEM_write;
logic [BITSIZE - 1 : 0]                 MEM_d;
/* verilator lint_on UNOPTFLAT */
logic [BITSIZE - 1 : 0]                 MEM_rs2;
logic [BITSIZE - 1 : 0]                 MEM_addr;
logic [31 : 0]                          MEM_instr;

assign MEM_write_o = MEM_write;

assign MEM_data_o = MEM_rs2;

always_ff@(posedge clk)
begin
    if(!resetn_i) begin
        CS <= GET_INSTR;
    end
    else
    begin
        CS <= NS;
    end
end

always_comb
begin
    MEM_EX_get_o    = 1'b0;
    MEM_WB_give_o   = 1'b0;
    MEM_write       = 1'b0;
    MEM_read_o      = 1'b0;

    case(CS)
        GET_INSTR: begin
            MEM_EX_get_o = 1'b1;
            if(EX_MEM_give_i) begin
                MEM_instr   = EX_MEM_instr_i;
                MEM_addr    = EX_MEM_result_i;
                MEM_rs2     = EX_MEM_rs2_i;
                if(EX_MEM_instr_i[6:0] == `LOAD || EX_MEM_instr_i[6:0] == `STORE)
                begin
                    NS = MEM;
                end
                else
                begin
                    NS = PROVIDE_DATA;
                    MEM_d = EX_MEM_result_i;                  
                end
            end
        end // GET_INSTR

        MEM: begin
            MEM_addr_o = MEM_addr; 
                case(MEM_instr[6 : 0])
                `LOAD: begin
                    MEM_read_o = 1'b1;
                    if(MEM_valid_i) begin
                        NS      = PROVIDE_DATA;
                        MEM_d   = MEM_data_i;
                    end
                end // LOAD

                `STORE: begin
                    MEM_write = 1'b1;
                    if(MEM_valid_i) begin
                        NS = PROVIDE_DATA;
                    end
                end // STORE

                default:begin
                end
            endcase
        end // MEM

        PROVIDE_DATA: begin
            if(WB_MEM_get_i)begin
                MEM_WB_give_o   = 1'b1;
                MEM_WB_instr_o  = MEM_instr;
                MEM_WB_data_o   = MEM_d;
                NS              = GET_INSTR;
            end
        end // GIVE_WB

        default:begin
        end
    endcase
    
end
endmodule
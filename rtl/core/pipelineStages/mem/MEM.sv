// ---------------RISCV-Luca---------------
// 
// Module:          MEM
// 
// Functionality:   Interact with memory (load/store)
// 
// -------------(c) Luca Hanel-------------

`include "instructions.sv"

module MEM#(
    parameter BITSIZE = 32
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
    output [1:0]                        MEM_write_size_o,
    //MEM-WB
    input                               WB_MEM_get_i,
    output                              MEM_WB_give_o,
    output [31 : 0]                     MEM_WB_instr_o,
    output [BITSIZE - 1 : 0]            MEM_WB_data_o
);

enum {GET_INSTR, MEM, PROVIDE_DATA} CS, NS;
/* verilator lint_off UNOPTFLAT */
logic                                   MEM_write;
logic                                   MEM_read;
logic [BITSIZE - 1 : 0]                 MEM_d;
/* verilator lint_on UNOPTFLAT */
logic [BITSIZE - 1 : 0]                 MEM_addr;
logic [31 : 0]                          MEM_instr;

logic                                   extend;
logic                                   MEM_EX_get;
logic                                   MEM_WB_give;

assign MEM_EX_get_o = MEM_EX_get;
assign MEM_WB_give_o = MEM_WB_give;
assign MEM_WB_instr_o  = MEM_instr;
assign MEM_WB_data_o   = MEM_d;

assign MEM_write_o = MEM_write;
assign MEM_read_o = MEM_read;
assign MEM_addr_o = MEM_addr; 
assign MEM_write_size_o = MEM_instr[13:12];
assign MEM_data_o = MEM_d;

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
    if(MEM_instr[6:0] == `LOAD || MEM_instr[6:0] == `STORE)
    case(MEM_instr[13:12])
        2'b00: begin
                MEM_d[BITSIZE - 1 : 8] = (MEM_instr[14]) ? 0 : {BITSIZE - 8 {MEM_d[7]}};
        end
        2'b01: begin
                MEM_d[BITSIZE - 1 : 16] = (MEM_instr[14]) ? 0 : {BITSIZE - 16 {MEM_d[15]}};
        end
        default: begin
        end
    endcase
end



always_comb
begin
    MEM_EX_get    = 1'b0;
    MEM_WB_give   = 1'b0;
    MEM_write     = 1'b0;
    MEM_read      = 1'b0;

    case(CS)
        GET_INSTR: begin
            MEM_EX_get = 1'b1;
            if(EX_MEM_give_i) begin
                MEM_instr   = EX_MEM_instr_i;
                MEM_addr    = EX_MEM_result_i;
                if(EX_MEM_instr_i[6:0] == `LOAD || EX_MEM_instr_i[6:0] == `STORE) begin
                    NS = MEM;
                    MEM_d = EX_MEM_rs2_i;
                end
                else begin
                    NS = PROVIDE_DATA;
                    MEM_d = EX_MEM_result_i;                  
                end
            end
        end // GET_INSTR

        MEM: begin
                case(MEM_instr[6 : 0])
                `LOAD: begin
                    MEM_read = 1'b1;
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
                MEM_WB_give   = 1'b1;
//                MEM_WB_instr_o  = MEM_instr;
//                MEM_WB_data_o   = MEM_d;
                NS              = GET_INSTR;
            end
        end // GIVE_WB

        default:begin
        end
    endcase
    
end
endmodule
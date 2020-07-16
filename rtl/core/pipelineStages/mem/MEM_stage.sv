// ------------------------ Disclaimer -----------------------
// No warranty of correctness, synthesizability or 
// functionality of this code is given.
// Use this code under your own risk.
// When using this code, copy this disclaimer at the top of 
// Your file
//
// (c) Luca Hanel 2020
//
// ------------------------------------------------------------
//
// Module name: MEM_stage
// 
// Functionality: Memory stage of pipelined processor. Handles
//                load & store instructions as well as setting
//                the correct value of the current pc for JAL,
//                JALR & AUIPC
//
// ------------------------------------------------------------

`include "instructions.sv"

module MEM_stage
#(
    parameter BITSIZE = 32
)(
    input logic         clk,
    input logic         rstn_i,
    input logic         halt_i,
    //EX-MEM
    input logic         valid_i,
    output logic        ack_o,
    input logic [31:0]  instr_i,
    input logic [31:0]  result_i,
    input logic [31:0]  rs2_i,
    input logic [31:0]  pc_i,
    //MEM-MEM
    output logic        MEM_en_o,
    output logic [31:0] MEM_addr_o,
    input logic [31:0]  MEM_data_i,
    output logic [31:0] MEM_data_o,
    output logic [3:0]  MEM_write_o,
    //MEM-WB
    input logic         ack_i,
    output logic        valid_o,
    output logic [31:0] instr_o,
    output logic [31:0] data_o
);

// Data register, 2x32 bit + valid: instr, data
struct packed {
    logic           valid;
    logic [31:0]    instr;
    logic [31:0]    data;
} data_n, data_q;


assign valid_o = data_q.valid;
assign data_o = data_q.data;
assign instr_o = data_q.instr;
assign MEM_addr_o = result_i;
assign MEM_data_o = rs2_i;

always_comb
begin
    data_n = data_q;
    ack_o = 1'b0;
    MEM_en_o = 1'b0;
    MEM_write_o = 'b0;

    // Data is no longer valid if we recieved and ack
    if(ack_i)
        data_n.valid = 1'b0;

    case(instr_i[6:0])
        // In case of LOAD or STORE, we give the respective signal
        // to the memory and wait for the next stage to ack
        `LOAD: begin
            if((!data_q.valid || ack_i) && valid_i) begin
                ack_o          = 1'b1;
                data_n.valid   = 1'b1;
                data_n.instr   = instr_i;
                case(instr_i[13:12])
                    2'b00:
                        data_n.data = {{24{MEM_data_i[7]}}, MEM_data_i[7:0]};
                    2'b01:
                        data_n.data = {{16{MEM_data_i[15]}}, MEM_data_i[15:0]};
                    2'b10:
                        data_n.data = MEM_data_i;
                    default: begin
                    end
                endcase
            end
            MEM_en_o = 1'b1;
        end

        // In case of LOAD or STORE, we give the respective signal
        // to the memory and wait for the next stage to ack
        `STORE: begin
            if((!data_q.valid || ack_i) && valid_i)begin
                ack_o          = 1'b1;
                data_n         = {1'b1, instr_i, MEM_data_i};
                MEM_en_o       = 1'b1;
                MEM_write_o = 'b1111;
                MEM_en_o    = 1'b1;
            end
            // Write the correct amount of bytes
            case(instr_i[13:12])
                2'b00:
                    MEM_write_o = 4'b0001;
                2'b01:
                    MEM_write_o = 4'b0011;
                2'b10:
                    MEM_write_o = 4'b1111;
                default: begin
                end
            endcase
            MEM_en_o    = 1'b1;            
        end

        // In case of these, we can directly give the data to the
        // following stage, the pointer to the old next instr (pc+4)
        `AUIPC, `JAL, `JALR: begin
            if((!data_q.valid || ack_i) && valid_i) begin
                ack_o          = 1'b1;
                data_n         = {1'b1, instr_i, pc_i + 4};
            end
        end

        // Else, there is nothing to do for the MEM stage, pass on
        // to WB stage.
        // In the future, maybe this and the above can bypass the 
        // MEM stage (if no hazard can happen). Like this, not only
        // the time per instruction reduces by 1, but the load/store
        // unit can work in parallel when other instructions are
        // processed.
        default: begin            
            if((!data_q.valid || ack_i) && valid_i) begin
                ack_o          = 1'b1;
                data_n         = {1'b1, instr_i, result_i};
            end
        end
    endcase
end

always_ff @(posedge clk, negedge rstn_i) begin
    if(!rstn_i) begin
        data_q <= 'b0;
    end else if(!halt_i) begin
        data_q <= data_n;
    end
end

endmodule
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
// Module name: IF_stage
// 
// Functionality: Instruction fetch stage of pipelined
//                processor.
//
// ------------------------------------------------------------

module IF_stage
#(
    parameter BITSIZE = 32
)(
    input               clk,
    input               resetn_i,
    //IF-ID
    input               notify_i,
    output              valid_o,
    output  [31:0]      instr_o,
    output  [31:0]      pc_o,
    //IF-MEM (TODO: cache)
    output [31:0]       MEM_addr_o,
    input [31:0]        MEM_data_i,
    output              MEM_read_o,
    input               MEM_valid_i,
    //Branching
    input [31:0]        pc_i,
    input               branch_taken_i
);

logic [31:0]    pc_n;
logic           empty;

assign MEM_addr_o = pc_n;

always_ff @(posedge clk, negedge resetn_i)
begin
    // In case of reset or branch taken,
    // reset the pc and set stage to empty
    if(!resetn_i) begin
        pc_q  <= 'b0;
        empty <= 1'b1;
    end
    else if(branch_taken_i) begin
        MEM_read_o <= 1'b1;
        pc_q  <= pc_i;
        empty <= 1'b1;
    end
    else begin
        if(notify_i || empty) begin
            // Else read data from memory
            if(MEM_valid_i) begin
                instr_o     <= MEM_data_i;
                pc_o        <= pc_n;
                pc_n        <= pc_n + 4;
                valid_o     <= 1'b1;
                MEM_read_o  <= 1'b0;
                empty       <= 1'b0;
            end
            else begin
                MEM_read_o  <= 1'b1;
                empty       <= 1'b1;
            end
        end else begin
            MEM_read_o <= 1'b0;
        end
    end
end
endmodule
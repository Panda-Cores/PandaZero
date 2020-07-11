// ---------------RISCV-Luca---------------
// 
// Module:          IF
// 
// Functionality:   Instruction fetch pipeline stage
// 
// -------------(c) Luca Hanel-------------

module IF_stage
#(
    parameter BITSIZE = 32
)(
    input                                       clk,
    input                                       resetn_i,
    //IF-ID
    input                                       ID_IF_get_i,
    output                                      IF_ID_give_o,
    output  [31 : 0]                            IF_ID_instr_o,
    output  [BITSIZE - 1 : 0]                   IF_ID_pc_o,
    //IF-MEM (TODO: cache)
    output  [BITSIZE - 1 : 0]                   MEM_addr_o,
    input [31 : 0]                              MEM_data_i,
    output                                      MEM_read_o,
    input                                       MEM_valid_i,
    //Branching
    input [BITSIZE - 1 : 0]                     pc_i,
    input                                       branch_taken_i
);

assign MEM_addr_o = pc_q;

always_comb begin
    if(MEM_valid_i) begin
        instr_q = MEM_data_i;
        valid_o = 1'b1;
    end
end

always_ff @(posedge clk, negedge resetn_i)
begin
    // In case of reset or branch taken,
    // reset the pc and set stage to empty
    if(!resetn_i) begin
        pc_q  <= 'b0;
        empty <= 1'b1;
        MEM_read_o <= 1'b0;
    end
    else if(branch_taken_i) begin
        pc_q  <= pc_i;
        empty <= 1'b1;
        MEM_read_o <= 1'b1;
    end
    else if(notify_i) begin
        pc_q <= pc_q + 4;
        MEM_read_o <= 1'b1;
    end
    else if(empty) begin
        MEM_read_o <= 1'b1;
    end
    else begin
        MEM_read_o <= 1'b0;
    end
end
endmodule
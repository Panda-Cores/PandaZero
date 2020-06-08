// ---------------RISCV-Luca---------------
// 
// Module:          core_top
// 
// Functionality:   topmodule of the core
// 
// -------------(c) Luca Hanel-------------

module core_top
#(
    parameter BITSIZE = 32
)(
    input                           clk,
    input                           resetn_i,
    //IF-MEM (TODO: caches)
    output [(2 * BITSIZE) - 1 : 0]  MEM_addr_o,
    inout  [(2 * BITSIZE) - 1 : 0]  MEM_data_i,
    inout  [(2 * BITSIZE) - 1 : 0]  MEM_data_o,
    output [1 : 0]                  MEM_read_o,
    output [1 : 0]                  MEM_write_o,
    output [3 : 0]                  MEM_write_size_o,
    input  [1 : 0]                  MEM_valid_i
);

logic                           resetn;
logic                           flush_pipeline;
logic                           flushn;

//IF-ID
logic                           ID_IF_get;
logic                           IF_ID_give;
logic [31 : 0]                  IF_ID_instr;
logic [BITSIZE - 1 : 0]         IF_ID_pc;

//IF-MEM
logic [BITSIZE - 1: 0]          IF_MEM_addr;
logic [31 : 0]                  IF_MEM_data_i;
logic                           IF_MEM_read;
logic                           IF_MEM_valid;

//EX-IF (branch)
/* verilator lint_off UNOPTFLAT */
logic                           branch_taken;
/* verilator lint_on UNOPTFLAT */
logic [BITSIZE - 1 : 0]         EX_IF_pc;

//ID-EX
logic                           EX_ID_get;
logic                           ID_EX_give;
logic [31 : 0]                  ID_EX_instr;
logic [BITSIZE - 1 : 0]         ID_EX_pc;
logic [BITSIZE - 1 : 0]         ID_EX_rs1;
logic [BITSIZE - 1 : 0]         ID_EX_rs2;
logic [BITSIZE - 1 : 0]         ID_EX_imm;

//ID
logic [4 : 0]                   ID_REG_rs1;
logic [4 : 0]                   ID_REG_rs2;
logic [BITSIZE - 1 : 0]         REG_ID_rs1_d;
logic [BITSIZE - 1 : 0]         REG_ID_rs2_d;
logic                           inv_instr;


//EX-MEM
logic                           EX_MEM_give;
logic                           MEM_EX_get;
logic [31 : 0]                  EX_MEM_instr;
logic [BITSIZE - 1 : 0]         EX_MEM_result;
logic [BITSIZE - 1 : 0]         EX_MEM_rs2;

//MEM
logic                           MEM_MEM_write;
logic [1 : 0]                   MEM_MEM_write_size;
/* verilator lint_off UNOPTFLAT */
logic                           MEM_MEM_read;
/* verilator lint_off UNOPTFLAT */
logic                           MEM_MEM_valid;
logic [BITSIZE - 1 : 0]         MEM_MEM_addr;
logic [BITSIZE - 1 : 0]         MEM_MEM_data_i;
logic [BITSIZE - 1 : 0]         MEM_MEM_data_o;

//MEM-WB
logic                           MEM_WB_give;
logic                           WB_MEM_get;
logic [31 : 0]                  MEM_WB_instr;
logic [BITSIZE - 1 : 0]         MEM_WB_data;

//WB
logic [4 : 0]                   WB_REG_rd;
logic [BITSIZE - 1 : 0]         WB_REG_d;

//REG
logic                           REG_mux;
logic [4 : 0]                   REG_rd;
logic [4 : 0]                   REG_rs1;
logic [4 : 0]                   REG_rs2;
logic [BITSIZE - 1 : 0]         REG_rs1_d;
logic [BITSIZE - 1 : 0]         REG_rs2_d;
logic [BITSIZE - 1 : 0]         REG_rd_d;


// MEM stage -> memory
assign MEM_write_o[0]               = MEM_MEM_write;
assign MEM_write_size_o[1:0]        = MEM_MEM_write_size;
assign MEM_read_o[0]                = MEM_MEM_read;
assign MEM_addr_o[BITSIZE - 1 : 0]  = MEM_MEM_addr;
assign MEM_MEM_data_i               = MEM_data_i[BITSIZE - 1 : 0];
assign MEM_data_o[BITSIZE - 1 : 0]  = MEM_MEM_data_o;
assign MEM_MEM_valid                = MEM_valid_i[0];

// IF -> memory
assign MEM_write_o[1]               = 1'b0;
assign MEM_write_size_o[3:2]        = 2'b0;
assign IF_MEM_data_i                = MEM_data_i[(2 * BITSIZE) - 1 : BITSIZE];
assign MEM_data_o[(2 * BITSIZE) - 1 : BITSIZE] = 'b0;
assign MEM_addr_o[(2 * BITSIZE) - 1 : BITSIZE] = IF_MEM_addr;
assign MEM_read_o[1]                = IF_MEM_read;
assign IF_MEM_valid                 = MEM_valid_i[1];

// Flush pipeline in case of taken branch
always_ff@(posedge clk)
begin
    if(branch_taken)
    begin
        flush_pipeline <= 1'b1;
        EX_IF_pc <= EX_MEM_result;
    end
    else
        flush_pipeline <= 1'b0;
end

assign flushn = ((!branch_taken) & (!flush_pipeline) & resetn_i);
assign resetn = resetn_i;

    

//WB->register file
always_comb
begin
    REG_rd = WB_REG_rd;
    REG_rd_d = WB_REG_d;
    REG_rs1 = ID_REG_rs1;
    REG_rs2 = ID_REG_rs2;
    REG_ID_rs1_d = REG_rs1_d;
    REG_ID_rs2_d = REG_rs2_d;
end

registerFile #(
    .BITSIZE    (   BITSIZE )
)registerFile_i(
    .rd         (   REG_rd      ),
    .rs1        (   REG_rs1     ),
    .rs2        (   REG_rs2     ),
    .data_rd_i  (   REG_rd_d    ),
    .data_rs1_o (   REG_rs1_d   ),
    .data_rs2_o (   REG_rs2_d   )
);

IF #(
    .BITSIZE        (   BITSIZE )
) IF_i (
    .clk            (   clk         ),
    .resetn_i       (   resetn      ),
    .ID_IF_get_i    (   ID_IF_get   ),
    .IF_ID_give_o   (   IF_ID_give  ),
    .IF_ID_instr_o  (   IF_ID_instr ),
    .IF_ID_pc_o     (   IF_ID_pc    ),
    //TODO: Cache
    .MEM_addr_o     (   IF_MEM_addr ),
    .MEM_data_i     (   IF_MEM_data_i),
    .MEM_read_o     (   IF_MEM_read ),
    .MEM_valid_i    (   IF_MEM_valid),
    //Branching
    .branch_taken_i (   branch_taken),
    .pc_i           (   EX_IF_pc    )
);

ID #(
    .BITSIZE            (   BITSIZE     )
) ID_i (
    .clk                (   clk         ),
    .resetn_i           (   flushn      ),
    .inv_instr_o        (   inv_instr   ),
    .IF_ID_give_i       (   IF_ID_give  ),
    .ID_IF_get_o        (   ID_IF_get   ),
    .IF_ID_instr_i      (   IF_ID_instr ),
    .IF_ID_pc_i         (   IF_ID_pc    ),
    .EX_ID_get_i        (   EX_ID_get   ),
    .ID_EX_give_o       (   ID_EX_give  ),
    .ID_EX_instruction_o(   ID_EX_instr ),
    .ID_EX_pc_o         (   ID_EX_pc    ),
    .ID_EX_rs1_o        (   ID_EX_rs1   ),
    .ID_EX_rs2_o        (   ID_EX_rs2   ),
    .ID_EX_imm_o        (   ID_EX_imm   ),
    .ID_REG_rs1_o       (   ID_REG_rs1  ),
    .ID_REG_rs2_o       (   ID_REG_rs2  ),
    .REG_ID_rs1_d_i     (   REG_ID_rs1_d),
    .REG_ID_rs2_d_i     (   REG_ID_rs2_d),
    .ID_REG_access_i    (   REG_mux     )
);

EX #(
    .BITSIZE            (   BITSIZE     )
) EX_i (
    .clk                (   clk         ),
    .resetn_i           (   flushn      ),
    .ID_EX_give_i       (   ID_EX_give  ),
    .EX_ID_get_o        (   EX_ID_get   ),
    .ID_EX_instruction_i(   ID_EX_instr ),
    .ID_EX_pc_i         (   ID_EX_pc    ),
    .ID_EX_rs1_i        (   ID_EX_rs1   ),
    .ID_EX_rs2_i        (   ID_EX_rs2   ),
    .ID_EX_imm_i        (   ID_EX_imm   ),
    .MEM_EX_get_i       (   MEM_EX_get  ),
    .EX_MEM_give_o      (   EX_MEM_give ),
    .EX_MEM_instruction_o(  EX_MEM_instr),
    .EX_MEM_result_o    (   EX_MEM_result),
    .EX_MEM_rs2_o       (   EX_MEM_rs2  ),
    .branch_taken_o     (   branch_taken)
);

MEM #(
    .BITSIZE            (   BITSIZE     )
) MEM_i (
    .clk                (   clk         ),
    .resetn_i           (   resetn      ),
    .EX_MEM_give_i      (   EX_MEM_give ),
    .MEM_EX_get_o       (   MEM_EX_get  ),
    .EX_MEM_instr_i     (   EX_MEM_instr),
    .EX_MEM_result_i    (   EX_MEM_result),
    .EX_MEM_rs2_i       (   EX_MEM_rs2  ),
    .MEM_addr_o         (   MEM_MEM_addr),
    .MEM_data_i         (   MEM_MEM_data_i),
    .MEM_data_o         (   MEM_MEM_data_o),
    .MEM_write_o        (   MEM_MEM_write),
    .MEM_write_size_o(MEM_MEM_write_size),
    .MEM_read_o         (   MEM_MEM_read ),
    .MEM_valid_i        (   MEM_MEM_valid),
    .WB_MEM_get_i       (   WB_MEM_get  ),
    .MEM_WB_give_o      (   MEM_WB_give ),
    .MEM_WB_instr_o     (   MEM_WB_instr),
    .MEM_WB_data_o      (   MEM_WB_data )
);

WB #(
    .BITSIZE            (   BITSIZE     )
) WB_i (
    .clk                (   clk         ),
    .resetn_i           (   resetn      ),
    .WB_MEM_get_o       (   WB_MEM_get  ),
    .MEM_WB_give_i      (   MEM_WB_give ),
    .MEM_WB_instruction_i(  MEM_WB_instr),
    .MEM_WB_data_i      (   MEM_WB_data ),
    .WB_REG_rd_o        (   WB_REG_rd   ),
    .WB_REG_d_o         (   WB_REG_d    ),
    .WB_REG_access_o    (   REG_mux     )
);
endmodule
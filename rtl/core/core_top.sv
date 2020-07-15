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
    /* verilator lint_off SYNCASYNCNET */
    input                           resetn_i,
    /* verilator lint_on SYNCASYNCNET */
    //IF-MEM (TODO: caches)
    output [(2 * BITSIZE) - 1 : 0]  MEM_addr_o,
    input  [(2 * BITSIZE) - 1 : 0]  MEM_data_i,
    output [(2 * BITSIZE) - 1 : 0]  MEM_data_o,
    output [1 : 0]                  MEM_read_o,
    output [1 : 0]                  MEM_write_o,
    output [3 : 0]                  MEM_write_size_o,
    input  [1 : 0]                  MEM_valid_i
);
/* verilator lint_off SYNCASYNCNET */
logic                           resetn;
/* verilator lint_on SYNCASYNCNET */
logic                           flush_pipeline;
logic                           flush;

//IF-ID
logic                           ID_IF_ack;
logic                           IF_ID_valid;
logic [31 : 0]                  IF_ID_instr;
logic [BITSIZE - 1 : 0]         IF_ID_pc;

//IF-MEM
logic [BITSIZE - 1: 0]          IF_MEM_addr;
logic [31 : 0]                  IF_MEM_data_i;
logic                           IF_MEM_read;
logic                           IF_MEM_valid;

//EX-IF (branch)
/* verilator lint_off UNOPTFLAT */
logic                           branch;
/* verilator lint_on UNOPTFLAT */
logic [BITSIZE - 1 : 0]         EX_IF_pc;

//ID-EX
logic                           EX_ID_ack;
logic                           ID_EX_valid;
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
logic [BITSIZE - 1 : 0]         EX_MEM_pc;

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
// TODO rework!!!
always_ff@(posedge clk)
begin
    if(branch)
    begin
        flush_pipeline <= 1'b1;
        EX_IF_pc <= EX_MEM_result;
    end
    else
        flush_pipeline <= 1'b0;
end

assign flush = flush_pipeline;
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

registerFile registerFile_i (
    .clk        ( clk         ),
    .rstn_i     ( resetn_i    ),
    .rd         ( REG_rd      ),
    .rs1        ( REG_rs1     ),
    .rs2        ( REG_rs2     ),
    .data_rd_i  ( REG_rd_d    ),
    .data_rs1_o ( REG_rs1_d   ),
    .data_rs2_o ( REG_rs2_d   )
);

IF_stage IF_i (
    .clk         ( clk           ),
    .rstn_i      ( resetn        ),
    .flush_i     ( flush         ),
    .ack_i       ( ID_IF_ack     ),
    .valid_o     ( IF_ID_valid   ),
    .instr_o     ( IF_ID_instr   ),
    .pc_o        ( IF_ID_pc      ),
    //TODO: Cache
    .MEM_addr_o  ( IF_MEM_addr   ),
    .MEM_data_i  ( IF_MEM_data_i ),
    .MEM_read_o  ( IF_MEM_read   ),
    .MEM_valid_i ( IF_MEM_valid  ),
    //Branching
    .branch_i    ( branch        ),
    .pc_i        ( EX_IF_pc      )
);

ID_stage ID_i (
    .clk      ( clk          ),
    .rstn_i   ( resetn_i     ),
    .flush_i  ( flush        ),
    .valid_i  ( IF_ID_valid  ),
    .ack_o    ( ID_IF_ack    ),
    .instr_i  ( IF_ID_instr  ),
    .pc_i     ( IF_ID_pc     ),
    .ack_i    ( EX_ID_ack    ),
    .valid_o  ( ID_EX_valid  ),
    .instr_o  ( ID_EX_instr  ),
    .pc_o     ( ID_EX_pc     ),
    .rs1_o    ( ID_EX_rs1    ),
    .rs2_o    ( ID_EX_rs2    ),
    .imm_o    ( ID_EX_imm    ),
    .rs1a_o   ( ID_REG_rs1   ),
    .rs2a_o   ( ID_REG_rs2   ),
    .rs1d_i   ( REG_ID_rs1_d ),
    .rs2d_i   ( REG_ID_rs2_d ),
    .rd_i     ( WB_REG_rd    )
);

EX_stage EX_i (
    .clk                (   clk         ),
    .rstn_i             (   resetn_i    ),
    .flush_i            (   flush       ),
    .valid_i            (   ID_EX_valid  ),
    .ack_o              (   EX_ID_ack   ),
    .instr_i            (   ID_EX_instr ),
    .pc_i               (   ID_EX_pc    ),
    .rs1_i              (   ID_EX_rs1   ),
    .rs2_i              (   ID_EX_rs2   ),
    .imm_i              (   ID_EX_imm   ),
    .ack_i              (   MEM_EX_get  ),
    .valid_o            (   EX_MEM_give ),
    .pc_o               (   EX_MEM_pc   ),
    .instr_o            (   EX_MEM_instr),
    .result_o           (   EX_MEM_result),
    .rs2_o              (   EX_MEM_rs2  ),
    .branch_o           (   branch      )
);

MEM_stage #(
    .BITSIZE            (   BITSIZE     )
) MEM_i (
    .clk                (   clk         ),
    .resetn_i           (   resetn      ),
    .EX_MEM_give_i      (   EX_MEM_give ),
    .MEM_EX_get_o       (   MEM_EX_get  ),
    .EX_MEM_pc_i        (   EX_MEM_pc   ),
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

WB_stage #(
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
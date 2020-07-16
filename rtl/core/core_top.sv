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
// Module name: core_top
// 
// Functionality: Top module of the core. Instantiates all
//                pipeline stages and the register file and
//                connects them.
//
// TODO: rework
//
// ------------------------------------------------------------


module core_top (
    input logic          clk,
    input logic          rstn_i,
    output logic         rst_reqn_o,
// IF-Memory
    output logic [31:0]  IF_addr_o,
    output logic         IF_en_o,
    input logic  [31:0]  IF_data_i,
    output logic [31:0]  IF_data_o,
    output logic [3:0]   IF_write_o,
// MEM-Memory
    output logic [31:0]  MEM_addr_o,
    output logic         MEM_en_o,
    input logic  [31:0]  MEM_data_i,
    output logic [31:0]  MEM_data_o,
    output logic [3:0]   MEM_write_o
);


assign rst_reqn_o = rstn_i;
assign IF_data_o = 'b0;
assign IF_write_o = 'b0;

//IF-ID
logic                ID_IF_ack;
logic                IF_ID_valid;
logic [31:0]         IF_ID_instr;
logic [31:0]         IF_ID_pc;

//EX-IF (branch)
logic                branch;
logic [31:0]         EX_IF_pc;

//ID-EX
logic                EX_ID_ack;
logic                ID_EX_valid;
logic [31:0]         ID_EX_instr;
logic [31:0]         ID_EX_pc;
logic [31:0]         ID_EX_rs1;
logic [31:0]         ID_EX_rs2;
logic [31:0]         ID_EX_imm;

//ID
logic [4:0]          ID_REG_rs1;
logic [4:0]          ID_REG_rs2;
logic [31:0]         REG_ID_rs1_d;
logic [31:0]         REG_ID_rs2_d;


//EX-MEM
logic                EX_MEM_valid;
logic                MEM_EX_ack;
logic [31:0]         EX_MEM_instr;
logic [31:0]         EX_MEM_result;
logic [31:0]         EX_MEM_rs2;
logic [31:0]         EX_MEM_pc;

//MEM-WB
logic                MEM_WB_valid;
logic                WB_MEM_ack;
logic [31:0]         MEM_WB_instr;
logic [31:0]         MEM_WB_data;

//WB
logic [4 : 0]        WB_REG_rd;
logic [31:0]         WB_REG_data;

// Flush pipeline in case of taken branch
// (flush signal currently not required, but maybe later)
logic                flush;
assign flush = branch;

registerFile registerFile_i (
    .clk        ( clk         ),
    .rstn_i     ( rstn_i      ),
    .rd         ( WB_REG_rd   ),
    .rs1        ( ID_REG_rs1  ),
    .rs2        ( ID_REG_rs2  ),
    .data_rd_i  ( WB_REG_data ),
    .data_rs1_o ( REG_ID_rs1_d),
    .data_rs2_o ( REG_ID_rs2_d)
);

IF_stage IF_i (
    .clk         ( clk           ),
    .rstn_i      ( rstn_i        ),
    .flush_i     ( flush         ),
    .ack_i       ( ID_IF_ack     ),
    .valid_o     ( IF_ID_valid   ),
    .instr_o     ( IF_ID_instr   ),
    .pc_o        ( IF_ID_pc      ),
    //TODO: Cache
    .MEM_en_o    ( IF_en_o      ),
    .MEM_addr_o  ( IF_addr_o     ),
    .MEM_data_i  ( IF_data_i     ),
    //Branching
    .branch_i    ( branch        ),
    .pc_i        ( EX_MEM_result )
);

ID_stage ID_i (
    .clk      ( clk          ),
    .rstn_i   ( rstn_i     ),
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
    .clk      ( clk           ),
    .rstn_i   ( rstn_i      ),
    .flush_i  ( flush         ),
    .valid_i  ( ID_EX_valid   ),
    .ack_o    ( EX_ID_ack     ),
    .instr_i  ( ID_EX_instr   ),
    .pc_i     ( ID_EX_pc      ),
    .rs1_i    ( ID_EX_rs1     ),
    .rs2_i    ( ID_EX_rs2     ),
    .imm_i    ( ID_EX_imm     ),
    .ack_i    ( MEM_EX_ack    ),
    .valid_o  ( EX_MEM_valid  ),
    .pc_o     ( EX_MEM_pc     ),
    .instr_o  ( EX_MEM_instr  ),
    .result_o ( EX_MEM_result ),
    .rs2_o    ( EX_MEM_rs2    ),
    .branch_o ( branch        )
);

MEM_stage MEM_i (
    .clk         ( clk           ),
    .rstn_i      ( rstn_i        ),
    .valid_i     ( EX_MEM_valid  ),
    .ack_o       ( MEM_EX_ack    ),
    .pc_i        ( EX_MEM_pc     ),
    .instr_i     ( EX_MEM_instr  ),
    .result_i    ( EX_MEM_result ),
    .rs2_i       ( EX_MEM_rs2    ),
    .MEM_en_o    ( MEM_en_o      ),
    .MEM_addr_o  ( MEM_addr_o    ),
    .MEM_data_i  ( MEM_data_i    ),
    .MEM_data_o  ( MEM_data_o    ),
    .MEM_write_o ( MEM_write_o   ),
    .ack_i       ( WB_MEM_ack    ),
    .valid_o     ( MEM_WB_valid  ),
    .instr_o     ( MEM_WB_instr  ),
    .data_o      ( MEM_WB_data   )
);

WB_stage WB_i (
    .clk     ( clk          ),
    .rstn_i  ( rstn_i       ),
    .ack_o   ( WB_MEM_ack   ),
    .valid_i ( MEM_WB_valid ),
    .instr_i ( MEM_WB_instr ),
    .data_i  ( MEM_WB_data  ),
    .rd_o    ( WB_REG_rd    ),
    .data_o  ( WB_REG_data  )
);
endmodule
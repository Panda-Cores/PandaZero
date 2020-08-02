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
    wb_bus_t.master      IF_wb_bus,
// MEM-Memory
    wb_bus_t.master      MEM_wb_bus,
// Debug bus
    dbg_intf             dbg_bus
);

assign rst_reqn_o = rstn_i;

//IF-ID
logic                ID_IF_ack;
logic                IF_ID_valid;
logic [31:0]         IF_ID_instr;
logic [31:0]         IF_ID_pc;

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

//REG
logic [4:0]          REG_rd;
logic [31:0]         REG_rdd;
logic [4:0]          REG_rs1;
logic [4:0]          REG_rs2;
logic [31:0]         REG_rs1_d;
logic [31:0]         REG_rs2_d;

// Branching
logic                branch;
logic                flush;
logic [31:0]         IF_pc;

// Debug signals
logic                halt_core;
logic                dbg_flush;
logic [4:0]          dbg_rs;
logic [4:0]          dbg_rd;
logic [31:0]         dbg_rdd;
logic [31:0]         dbg_rsd;
logic [31:0]         dbg_pc;
logic [31:0]         dbg_curr_pc;

// Flush pipeline in case of taken branch
// or request by debug module
assign flush = branch | dbg_flush;
// If flushed by debug module, set the requested pc
assign IF_pc = (dbg_flush) ? dbg_pc : EX_MEM_result;

// Mux debug module and core to register file
always_comb
begin
    // If not halted, mux to core (ID & WB)
    REG_rd = WB_REG_rd;
    REG_rdd = WB_REG_data;
    REG_rs1 = ID_REG_rs1;
    REG_rs2 = ID_REG_rs2;
    REG_ID_rs1_d = REG_rs1_d;
    REG_ID_rs2_d = REG_rs2_d;

    // If halted, mux to debug module
    if(halt_core) begin
        REG_rd = dbg_rd;
        REG_rs1 = dbg_rs;
        REG_rdd = dbg_rdd;
        dbg_rsd = REG_rs1_d;
    end
end

core_dbg_module core_dbg_i (
    .clk        ( clk           ),
    .rstn_i     ( rstn_i        ),
    .dbg_bus    ( dbg_bus       ),
    .halt_core_o( halt_core     ),
    .rs_o       ( dbg_rs        ),
    .rs_di      ( dbg_rsd       ),
    .rd_o       ( dbg_rd        ),
    .rd_do      ( dbg_rdd       ),
    .flush_o    ( dbg_flush     ),
    .pc_i       ( dbg_curr_pc   ),
    .pc_o       ( dbg_pc   )
);

registerFile registerFile_i (
    .clk        ( clk         ),
    .rstn_i     ( rstn_i      ),
    .rd         ( REG_rd      ),
    .rs1        ( REG_rs1     ),
    .rs2        ( REG_rs2     ),
    .data_rd_i  ( REG_rdd     ),
    .data_rs1_o ( REG_rs1_d   ),
    .data_rs2_o ( REG_rs2_d   )
);

IF_stage IF_i (
    .clk         ( clk           ),
    .rstn_i      ( rstn_i        ),
    .flush_i     ( flush         ),
    .halt_i      ( halt_core     ),
    .ack_i       ( ID_IF_ack     ),
    .valid_o     ( IF_ID_valid   ),
    .instr_o     ( IF_ID_instr   ),
    .pc_o        ( IF_ID_pc      ),
    .wb_bus      ( IF_wb_bus     ),
    .branch_i    ( branch        ),
    .pc_i        ( IF_pc         ),
    .dbg_pc_o    ( dbg_curr_pc   )
);

ID_stage ID_i (
    .clk      ( clk          ),
    .rstn_i   ( rstn_i       ),
    .flush_i  ( flush        ),
    .halt_i   ( halt_core    ),
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
    .rstn_i   ( rstn_i        ),
    .flush_i  ( flush         ),
    .halt_i   ( halt_core     ),
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
    .halt_i      ( halt_core     ),
    .valid_i     ( EX_MEM_valid  ),
    .ack_o       ( MEM_EX_ack    ),
    .pc_i        ( EX_MEM_pc     ),
    .instr_i     ( EX_MEM_instr  ),
    .result_i    ( EX_MEM_result ),
    .rs2_i       ( EX_MEM_rs2    ),
    .wb_bus      ( MEM_wb_bus    ),
    .ack_i       ( WB_MEM_ack    ),
    .valid_o     ( MEM_WB_valid  ),
    .instr_o     ( MEM_WB_instr  ),
    .data_o      ( MEM_WB_data   )
);

WB_stage WB_i (
    .clk     ( clk          ),
    .rstn_i  ( rstn_i       ),
    .halt_i  ( halt_core    ),
    .ack_o   ( WB_MEM_ack   ),
    .valid_i ( MEM_WB_valid ),
    .instr_i ( MEM_WB_instr ),
    .data_i  ( MEM_WB_data  ),
    .rd_o    ( WB_REG_rd    ),
    .data_o  ( WB_REG_data  )
);
endmodule
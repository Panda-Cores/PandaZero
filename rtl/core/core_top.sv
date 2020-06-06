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
    input                   clk,
    input                   resetn_i
);


logic                                       resetn;

//IF-ID
logic                           ID_IF_get;
logic                           IF_ID_give;
logic [31 : 0]                  IF_ID_instr;

//ID-EX
logic                           EX_ID_get;
logic                           ID_EX_give;
logic [31 : 0]                  ID_EX_instr;
logic [BITSIZE - 1 : 0]         ID_EX_rs1;
logic [BITSIZE - 1 : 0]         ID_EX_rs2;

//ID
logic [4 : 0]                   ID_REG_rs1;
logic [4 : 0]                   ID_REG_rs2;
logic [BITSIZE - 1 : 0]         REG_ID_rs1_d;
logic [BITSIZE - 1 : 0]         REG_ID_rs2_d;


//EX-WB
logic                           EX_WB_give;
logic                           WB_EX_get;
logic [31 : 0]                  EX_WB_instr;
logic [BITSIZE - 1 : 0]         EX_WB_d;

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

assign resetn = resetn_i;

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
    .IF_ID_instr_o  (   IF_ID_instr )
);

ID #(
    .BITSIZE            (   BITSIZE     )
) ID_i (
    .clk                (   clk         ),
    .resetn_i           (   resetn      ),
    .IF_ID_give_i       (   IF_ID_give  ),
    .ID_IF_get_o        (   ID_IF_get   ),
    .IF_ID_instr_i      (   IF_ID_instr ),
    .EX_ID_get_i        (   EX_ID_get   ),
    .ID_EX_give_o       (   ID_EX_give  ),
    .ID_EX_instruction_o(   ID_EX_instr ),
    .ID_EX_rs1_o        (   ID_EX_rs1   ),
    .ID_EX_rs2_o        (   ID_EX_rs2   ),
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
    .resetn_i           (   resetn      ),
    .ID_EX_give_i       (   ID_EX_give  ),
    .EX_ID_get_o        (   EX_ID_get   ),
    .ID_EX_instruction_i(   ID_EX_instr ),
    .ID_EX_rs1_i        (   ID_EX_rs1   ),
    .ID_EX_rs2_i        (   ID_EX_rs2   ),
    .WB_EX_get_i        (   WB_EX_get   ),
    .EX_WB_give_o       (   EX_WB_give  ),
    .EX_WB_instruction_o(   EX_WB_instr ),
    .EX_WB_d_o          (   EX_WB_d     )
);

WB #(
    .BITSIZE            (   BITSIZE     )
) WB_i (
    .clk                (   clk         ),
    .resetn_i           (   resetn      ),
    .WB_EX_get_o        (   WB_EX_get   ),
    .EX_WB_give_i       (   EX_WB_give  ),
    .EX_WB_instruction_i(   EX_WB_instr ),
    .EX_WB_d_i          (   EX_WB_d     ),
    .WB_REG_rd_o        (   WB_REG_rd   ),
    .WB_REG_d_o         (   WB_REG_d    ),
    .WB_REG_access_o    (   REG_mux     )
);
endmodule
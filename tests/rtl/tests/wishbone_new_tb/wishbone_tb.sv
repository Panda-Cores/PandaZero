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
// Module name: wishbone_tb
// 
// Functionality: wishbone testbench
//
// ------------------------------------------------------------

`include "wishbone_interfaces.sv"

module wishbone_tb
(
    input logic         clk,
    input logic         rstn_i,
    input logic [1:0][31:0]  mdata_i,
    output logic [1:0][31:0] mdata_o,
    input logic [1:0][31:0]  maddr_i,
    input logic [1:0][2:0]   mnaccess_i,
    input logic [1:0][3:0]   mwe_i,
    input logic [1:0]        mvalid_i,
    output logic [1:0]       mvalid_o
);
/* verilator lint_off PINMISSING */
/* verilator lint_off UNDRIVEN */

localparam N_MASTER = 2;
localparam N_SLAVE = 2;

logic [31:0] s0data_i;
logic [31:0] s0data_o;
logic [31:0] s0addr_o;
logic [3:0]  s0sel;
logic        s0we;
logic [3:0]  s0wes;
assign s0wes = (s0we) ? s0sel : 4'b0000;

logic [31:0] s1data_i;
logic [31:0] s1data_o;
logic [31:0] s1addr_o;
logic [3:0]  s1sel;
logic        s1we;
logic [3:0]  s1wes;
assign s1wes = (s1we) ? s1sel : 4'b0000;

wb_master_bus_t#(.TAGSIZE(1)) wb_master[N_MASTER];
wb_slave_bus_t#(.TAGSIZE(1))  wb_slave[N_SLAVE];



wishbone_interconnect #(
    .TAGSIZE    (1),
    .N_SLAVE    ( N_SLAVE ),
    .N_MASTER   ( N_MASTER )
) intercon (
    .clk_i      ( clk ),
    .rst_i      ( ~rstn_i ),
    .SSTART_ADDR({32'h10, 32'h0}),
    .SEND_ADDR  ({32'h1f, 32'hf}),
    .wb_master_bus(wb_master),
    .wb_slave_bus(wb_slave)
);

wishbone_master #(
    .TAGSIZE    (1)
) wbmaster0 (
    .clk_i      ( clk       ),
    .rst_i      ( ~rstn_i   ),
    .data_i     ( mdata_i[0]  ),
    .data_o     ( mdata_o[0]  ),
    .addr_i     ( maddr_i[0]  ),
    .n_access_i ( mnaccess_i[0]),
    .we_i       ( mwe_i[0]    ),
    .valid_i    ( mvalid_i[0] ),
    .valid_o    ( mvalid_o[0] ),
    .wb_bus     ( wb_master[0])
);

wishbone_master #(
    .TAGSIZE    (1)
) wbmaster1 (
    .clk_i      ( clk       ),
    .rst_i      ( ~rstn_i   ),
    .data_i     ( mdata_i[1]  ),
    .data_o     ( mdata_o[1]  ),
    .addr_i     ( maddr_i[1]  ),
    .n_access_i ( mnaccess_i[1]),
    .we_i       ( mwe_i[1]    ),
    .valid_i    ( mvalid_i[1] ),
    .valid_o    ( mvalid_o[1] ),
    .wb_bus     ( wb_master[1])
);

wishbone_slave #(
    .TAGSIZE    (1)
) wbslave0 (
    .clk_i      ( clk      ),
    .rst_i      ( ~rstn_i  ),
    .data_i     ( s0data_i ),
    .data_o     ( s0data_o ),
    .addr_o     ( s0addr_o   ),
    .we_o       ( s0we     ),
    .sel_o      ( s0sel    ),
    .valid_i    ( 1'b1     ),
    .wb_bus     ( wb_slave[0])
);

wishbone_slave #(
    .TAGSIZE    (1)
) wbslave1 (
    .clk_i      ( clk      ),
    .rst_i      ( ~rstn_i  ),
    .data_i     ( s1data_i ),
    .data_o     ( s1data_o ),
    .addr_o     ( s1addr_o   ),
    .we_o       ( s1we     ),
    .sel_o      ( s1sel    ),
    .valid_i    ( 1'b1     ),
    .wb_bus     ( wb_slave[1])
);

dual_ram #(
    .SIZE ( 32 )
) slave0 (
    .clk        ( clk       ),
    .rstn_i     ( rstn_i    ),
    .addrb_i    ( s0addr_o    ),
    .enb_i      ( 1'b1      ),
    .web_i      ( s0wes     ),
    .dinb_i     ( s0data_o  ),
    .doutb_o    ( s0data_i  )
);

dual_ram #(
    .SIZE ( 32 )
) slave1 (
    .clk        ( clk       ),
    .rstn_i     ( rstn_i    ),
    .addrb_i    ( s1addr_o  ),
    .enb_i      ( 1'b1      ),
    .web_i      ( s1wes     ),
    .dinb_i     ( s1data_o  ),
    .doutb_o    ( s1data_i  )
);

endmodule
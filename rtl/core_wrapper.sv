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
// Module name: core_wrapper
// 
// Functionality: Verilog wrapper file for the core, in order
//                to instantiate it in a block design in Vivado
//                and connect a BRAM
//
// ------------------------------------------------------------

/* verilator lint_off PINMISSING */
module core_wrapper
(
    input wire          clk,
    input wire          rstn_i,
    input wire          halt_core_i,
    output wire         rst_o
);

wire        rst_reqn;

assign rst_o = ~rst_reqn;

wb_master_bus_t#(.TAGSIZE(1)) masters[2];
wb_slave_bus_t#(.TAGSIZE(1))  rom_wb_bus[1];

core_top core_i
(
    .clk        ( clk          ),
    .rstn_i     ( rstn_i       ),
    .halt_core_i( halt_core_i  ),
    .rst_reqn_o ( rst_reqn     ),
    .IF_wb_bus  ( masters[1] ),
    .MEM_wb_bus ( masters[0])
);

wb_ram_wrapper #(
  .SIZE (32)
) IF_mem (
  .clk    ( clk       ),
  .rstn_i ( rstn_i    ),
  .wb_bus ( rom_wb_bus[0])
);

wishbone_interconnect #(
    .TAGSIZE    ( 1 ),
    .N_SLAVE    ( 1 ),
    .N_MASTER   ( 2 )
) intercon (
    .clk_i      ( clk ),
    .rst_i      ( ~rstn_i ),
    .SSTART_ADDR({32'h0}),
    .SEND_ADDR  ({32'h80}),
    .wb_master_bus(masters),
    .wb_slave_bus(rom_wb_bus)
);

endmodule
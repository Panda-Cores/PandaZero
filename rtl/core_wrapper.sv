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
wire [31:0] MEM_addr;
wire [31:0] mem_MEM_data;
wire [31:0] MEM_mem_data;
wire [3:0]  MEM_write;
wire        MEM_en;

assign rst_o = ~rst_reqn;

wb_master_bus_t#(.TAGSIZE(1)) IF_wb_bus[1];
wb_slave_bus_t#(.TAGSIZE(1))  rom_wb_bus[1];

core_top core_i
(
    .clk        ( clk          ),
    .rstn_i     ( rstn_i       ),
    .halt_core_i( halt_core_i  ),
    .rst_reqn_o ( rst_reqn     ),
    .IF_wb_bus  ( IF_wb_bus[0] ),
    .MEM_en_o   ( MEM_en       ),
    .MEM_addr_o ( MEM_addr     ),
    .MEM_data_i ( mem_MEM_data ),
    .MEM_data_o ( MEM_mem_data ),
    .MEM_write_o( MEM_write    )
);

dual_ram #(
  .SIZE     ( 32           )
) ram_i (
  .clk      ( clk          ),
  .rstn_i   ( rst_reqn     ),
  .addra_i  ( 32'b0        ),
  .ena_i    ( 1'b0         ),
  .addrb_i  ( MEM_addr     ),
  .enb_i    ( MEM_en       ),
  .web_i    ( MEM_write    ),
  .dinb_i   ( MEM_mem_data ),
  .doutb_o  ( mem_MEM_data )
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
    .N_MASTER   ( 1 )
) intercon (
    .clk_i      ( clk ),
    .rst_i      ( ~rstn_i ),
    .SSTART_ADDR({32'h0}),
    .SEND_ADDR  ({32'h40}),
    .wb_master_bus(IF_wb_bus),
    .wb_slave_bus(rom_wb_bus)
);

endmodule
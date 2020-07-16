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

module core_wrapper
(
    input wire          clk,
    input wire          rstn_i,
    output wire         rst_o
);

wire        rst_reqn;
wire [31:0] IF_addr;
wire [31:0] mem_IF_data;
wire [31:0] IF_mem_data;
wire [31:0] MEM_addr;
wire [31:0] mem_MEM_data;
wire [31:0] MEM_mem_data;
wire [3:0]  IF_write;
wire [3:0]  MEM_write;
wire        IF_en;
wire        MEM_en;

assign rst_o = ~rst_reqn;
assign IF_mem_data = 'b0;

core_top core_i
(
    .clk        ( clk          ),
    .rstn_i     ( rstn_i       ),
    .rst_reqn_o ( rst_reqn     ),
    .IF_en_o    ( IF_en        ),
    .IF_write_o ( IF_write     ),
    .IF_addr_o  ( IF_addr      ),
    .IF_data_i  ( mem_IF_data  ),
    .IF_data_o  ( IF_mem_data  ),
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
  .addra_i  ( IF_addr      ),
  .ena_i    ( IF_en        ),
  .douta_o  ( mem_IF_data  ),
  .addrb_i  ( MEM_addr     ),
  .enb_i    ( MEM_en       ),
  .web_i    ( MEM_write    ),
  .dinb_i   ( MEM_mem_data ),
  .doutb_o  ( mem_MEM_data )
);

endmodule
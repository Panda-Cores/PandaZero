// ---------------RISCV-Luca---------------
// 
// Module:          mem_ctrl
// 
// Functionality:   memory controller
// 
// -------------(c) Luca Hanel-------------

module mem_ctrl_top
#(
    parameter BITSIZE = 32,
    parameter N_WORDS_PER_ADDR = 4,
    parameter MEM_SIZE = 1024,
    parameter N_ACCESSORS = 2 //Core, Cache
)(
    input                                       clk,
    input                                       resetn_i,
    //ACCESSORS
    input [(32 * N_ACCESSORS) - 1 : 0]          acc_address_i,
    input [N_ACCESSORS - 1 : 0]                 acc_store_i,
    input [N_ACCESSORS - 1 : 0]                 acc_load_i,
    inout [(N_ACCESSORS * N_WORDS_PER_ADDR * BITSIZE) - 1:0]  acc_data_io,
    output [N_ACCESSORS - 1 : 0]                acc_ready_o,
    output [N_ACCESSORS - 1 : 0]                acc_done_o
);

logic [(N_WORDS_PER_ADDR * BITSIZE) - 1:0]      mem_data;
logic [31 : 0]                                  mem_addr;
logic                                           mem_store;
logic                                           mem_valid_cm;
logic                                           mem_valid_mc;

mem_ctrl#(
    .BITSIZE            (   BITSIZE         ),
    .N_WORDS_PER_ADDR   (   N_WORDS_PER_ADDR),
    .MEM_SIZE           (   MEM_SIZE        ),
    .N_ACCESSORS        (   N_ACCESSORS     )
) mem_ctrl_i (
    .clk                (   clk             ),
    .resetn_i           (   resetn_i        ),
    .acc_address_i      (   acc_address_i   ),
    .acc_store_i        (   acc_store_i     ),
    .acc_load_i         (   acc_load_i      ),
    .acc_data_io        (   acc_data_io     ),
    .acc_ready_o        (   acc_ready_o     ),
    .acc_done_o         (   acc_done_o      ),
    .mem_addr_o         (   mem_addr        ),
    .mem_data_io        (   mem_data        ),
    .mem_store_o        (   mem_store       ),
    .mem_valid_o        (   mem_valid_cm    ),
    .mem_valid_i        (   mem_valid_mc    )
);

mem#(
    .BITSIZE            (   BITSIZE         ),
    .N_WORDS_PER_ADDR   (   N_WORDS_PER_ADDR),
    .MEM_SIZE           (   MEM_SIZE        )
) mem_i (
    .mem_addr_i         (   mem_addr        ),
    .mem_data_io        (   mem_data        ),
    .mem_store_i        (   mem_store       ),
    .mem_valid_i        (   mem_valid_cm    ),
    .mem_valid_o        (   mem_valid_mc    )
);

endmodule
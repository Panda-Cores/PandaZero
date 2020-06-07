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
    input [(N_ACCESSORS * N_WORDS_PER_ADDR * BITSIZE) - 1:0]  acc_data_i,
    output [(N_ACCESSORS * N_WORDS_PER_ADDR * BITSIZE) - 1:0]  acc_data_o,
    output [N_ACCESSORS - 1 : 0]                acc_done_o
);

logic [(N_WORDS_PER_ADDR * BITSIZE) - 1:0]      mem_data_m_ctl;
logic [(N_WORDS_PER_ADDR * BITSIZE) - 1:0]      mem_data_ctl_m;
    /* verilator lint_off UNOPTFLAT */
logic [31 : 0]                                  mem_addr;
    /* verilator lint_on UNOPTFLAT */
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
    .acc_data_i         (   acc_data_i      ),
    .acc_data_o         (   acc_data_o      ),
    .acc_done_o         (   acc_done_o      ),
    .mem_addr_o         (   mem_addr        ),
    .mem_data_i         (   mem_data_m_ctl  ),
    .mem_data_o         (   mem_data_ctl_m  ),
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
    .mem_data_i         (   mem_data_ctl_m  ),
    .mem_data_o         (   mem_data_m_ctl  ),
    .mem_store_i        (   mem_store       ),
    .mem_valid_i        (   mem_valid_cm    ),
    .mem_valid_o        (   mem_valid_mc    )
);

endmodule
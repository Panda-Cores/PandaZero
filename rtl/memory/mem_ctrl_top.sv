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
    parameter MEM_SIZE = 1024,
    parameter N_ACCESSORS = 2 //Core, Cache
)(
    input                                       clk,
    input                                       resetn_i,
    //ACCESSORS
    input [(32 * N_ACCESSORS) - 1 : 0]          acc_address_i,
    input [N_ACCESSORS - 1 : 0]                 acc_write_i,
    input [(2*N_ACCESSORS) - 1 : 0]             acc_write_size_i,
    input [N_ACCESSORS - 1 : 0]                 acc_read_i,
    input [(N_ACCESSORS * BITSIZE) - 1:0]       acc_data_i,
    output [(N_ACCESSORS * BITSIZE) - 1:0]      acc_data_o,
    output [N_ACCESSORS - 1 : 0]                acc_done_o
);

logic [(BITSIZE) - 1:0]                         mem_data_m_ctl;
logic [(BITSIZE) - 1:0]                         mem_data_ctl_m;
    /* verilator lint_off UNOPTFLAT */
logic [BITSIZE - 1 : 0]                         mem_addr;
    /* verilator lint_on UNOPTFLAT */
logic                                           mem_write;
logic [1 : 0]                                   mem_write_size;
logic                                           mem_valid_cm;
logic                                           mem_valid_mc;

mem_ctrl#(
    .BITSIZE            (   BITSIZE         ),
    .MEM_SIZE           (   MEM_SIZE        ),
    .N_ACCESSORS        (   N_ACCESSORS     )
) mem_ctrl_i (
    .clk                (   clk             ),
    .resetn_i           (   resetn_i        ),
    .acc_address_i      (   acc_address_i   ),
    .acc_write_i        (   acc_write_i     ),
    .acc_write_size_i   (   acc_write_size_i),
    .acc_read_i         (   acc_read_i      ),
    .acc_data_i         (   acc_data_i      ),
    .acc_data_o         (   acc_data_o      ),
    .acc_done_o         (   acc_done_o      ),
    .mem_addr_o         (   mem_addr        ),
    .mem_data_i         (   mem_data_m_ctl  ),
    .mem_data_o         (   mem_data_ctl_m  ),
    .mem_write_o        (   mem_write       ),
    .mem_write_size_o   (   mem_write_size  ),
    .mem_valid_o        (   mem_valid_cm    ),
    .mem_valid_i        (   mem_valid_mc    )
);

memory#(
    .BITSIZE            (   BITSIZE         ),
    .MEM_SIZE           (   MEM_SIZE        )
) memory_i (
    .mem_addr_i         (   mem_addr        ),
    .mem_data_i         (   mem_data_ctl_m  ),
    .mem_data_o         (   mem_data_m_ctl  ),
    .mem_write_i        (   mem_write       ),
    .mem_write_size_i   (   mem_write_size  ),
    .mem_valid_i        (   mem_valid_cm    ),
    .mem_valid_o        (   mem_valid_mc    )
);

endmodule
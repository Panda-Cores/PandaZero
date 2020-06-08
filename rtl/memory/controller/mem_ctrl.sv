// ---------------RISCV-Luca---------------
// 
// Module:          mem_ctrl
// 
// Functionality:   memory controller
// 
// -------------(c) Luca Hanel-------------

module mem_ctrl
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
    /* verilator lint_off ALWCOMBORDER */
    /* verilator lint_off UNOPTFLAT */
    input [(N_ACCESSORS  * BITSIZE) - 1:0]      acc_data_i,
    output [(N_ACCESSORS  * BITSIZE) - 1:0]     acc_data_o,
    /* verilator lint_on UNOPTFLAT */
    /* verilator lint_on ALWCOMBORDER */
    output [N_ACCESSORS - 1 : 0]                acc_done_o,
    //Memory
    output [31 : 0]                             mem_addr_o,
    /* verilator lint_off ALWCOMBORDER */
    /* verilator lint_off UNOPTFLAT */
    input [BITSIZE - 1:0]  mem_data_i,
    output [BITSIZE - 1:0] mem_data_o,
    /* verilator lint_on ALWCOMBORDER */
    /* verilator lint_on UNOPTFLAT */
    output                                      mem_write_o,
    output [1 : 0]                              mem_write_size_o,
    output                                      mem_valid_o,
    input                                       mem_valid_i
);

enum {IDLE, read, write} CS, NS;

int                                         i;
/* verilator lint_off UNUSED */
int                                         accessor;
/* verilator lint_on UNUSED */

genvar ii;
always_ff@(posedge clk)
begin
    if(!resetn_i)
    begin
        
    end
    else
    begin
        CS <= NS;
    end
end


for(ii = 0; ii < N_ACCESSORS; ii = ii + 1) begin
always_comb
begin
    acc_done_o = 'b0;
    mem_valid_o = 1'b0;
    mem_write_o = 1'b0;

    case(CS)
        IDLE: begin
            // Prefer write over read
            if(acc_write_i != '0)
            begin
                // Priority: LSB is highest priority (comes last)
                for(i = N_ACCESSORS - 1; i >= 0; i = i - 1) begin
                    if(acc_write_i[i] == 'b1) begin
                        accessor = i;
                        NS = write;
                    end
                end
            end
            else
            if(acc_read_i != '0)
            begin
                // Priority: LSB is highest priority (comes last)
                for(i = N_ACCESSORS - 1; i >= 0; i = i - 1) begin
                    if(acc_read_i[i] == 'b1) begin
                        accessor = i;
                        NS = read;
                    end
                end
            end
        end

        read: begin
            mem_valid_o = 1'b1;

            if(accessor == ii)
            begin
                mem_addr_o = acc_address_i[((ii+1) * BITSIZE) - 1 : (ii * BITSIZE)];
                acc_data_o[((ii+1) * BITSIZE) - 1 : (ii * BITSIZE)] = mem_data_i;
            end
            if(mem_valid_i)
            begin
                acc_done_o[accessor] = 1'b1;
                NS = IDLE;
            end
            if(!acc_read_i[accessor])
            begin
                NS = IDLE;
            end
        end

        write: begin
            mem_valid_o = 1'b1;
            mem_write_o = 1'b1;
            if(accessor == ii)
            begin
                mem_addr_o       = acc_address_i[((ii+1) * BITSIZE) - 1 : (ii * BITSIZE)];
                mem_data_o       = acc_data_i[((ii+1) * BITSIZE) - 1 : (ii * BITSIZE)]; 
                mem_write_size_o = acc_write_size_i[(2 * (ii+1)) - 1 : ii * 2];
            end
            if(mem_valid_i)
            begin
                acc_done_o[accessor] = 1'b1;
                NS = IDLE;
            end
            if(!acc_read_i[accessor])
            begin
                NS = IDLE;
            end
        end

        default:begin
        end
    endcase
end
end
endmodule
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
// Module name: c_region_sel
// 
// Functionality: Selects if the address is cacheable or should
//                be directly accessed.
//
// Todo: Select if region is writeable or not
//       Give out error
//
// ------------------------------------------------------------

module c_region_sel#(
    parameter                               N_C_REGIONS,
    parameter logic [N_C_REGIONS-1:0][31:0] C_REGION_START,
    parameter logic [N_C_REGIONS-1:0][31:0] C_REGION_END
)(
    input logic             load_i,
    input logic             store_i,
    input logic [31:0]      addr_i,
    output logic            cache_load_o,
    output logic            cache_store_o,
    output logic            lsu_load_o,
    output logic            lsu_store_o,
    output logic [1:0]      error_o
);

assign error_o = 'b0;

always_comb
begin
    cache_load_o = 1'b0;
    cache_store_o = 1'b0;
    // standard assume not cacheable
    lsu_load_o = load_i;
    lsu_store_o = store_i;
    if(load_i || store_i) begin
        for(int i = 0; i < N_C_REGIONS; i++) begin
            // if the region is cacheable, assign the signals to the cache
            if(addr_i >= C_REGION_START[i] && addr_i < C_REGION_END[i]) begin
                cache_load_o = load_i;
                cache_store_o = store_i;
                lsu_load_o = 1'b0;
                lsu_store_o = 1'b0;
            end
        end
    end else begin
        lsu_load_o = 1'b0;
        lsu_store_o = 1'b0;
    end
end

endmodule
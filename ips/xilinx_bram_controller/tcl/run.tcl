
set migPath $::env(PWD)/mig_native.prj

set partNumber xc7a100ti-csg324-1L

create_project xilinx_bram_controller . -part $partNumber
create_ip -name blk_mem_gen -vendor xilinx.com -library ip -version 8.4 -module_name xilinx_bram_controller
set_property -dict [ list \
    CONFIG.Memory_Type {True_Dual_Port_RAM} \
    CONFIG.Enable_32bit_Address {true} \
    CONFIG.Use_Byte_Write_Enable {true} \
    CONFIG.Byte_Size {8} \
    CONFIG.Write_Width_A {32} \
    CONFIG.Write_Depth_A {1024} \
    CONFIG.Read_Width_A {32} \
    CONFIG.Operating_Mode_A {READ_FIRST} \
    CONFIG.Write_Width_B {32} \
    CONFIG.Read_Width_B {32} \
    CONFIG.Enable_B {Use_ENB_Pin} \
    CONFIG.Register_PortA_Output_of_Memory_Primitives {true} \
    CONFIG.Register_PortA_Output_of_Memory_Core {false} \
    CONFIG.Use_REGCEA_Pin {false} \
    CONFIG.Register_PortB_Output_of_Memory_Primitives {true} \
    CONFIG.Use_RSTA_Pin {true} \
    CONFIG.Reset_Memory_Latch_A {false} \
    CONFIG.Reset_Priority_A {CE} \
    CONFIG.Use_RSTB_Pin {true} \
    CONFIG.Port_B_Clock {100} \
    CONFIG.Port_B_Write_Rate {50} \
    CONFIG.Port_B_Enable_Rate {100} \
    CONFIG.EN_SAFETY_CKT {false} \
    ] [get_ips xilinx_bram_controller]
generate_target {instantiation_template} [get_files xilinx_bram_controller.srcs/sources_1/ip/xilinx_bram_controller/xilinx_bram_controller.xci]
update_compile_order -fileset sources_1
generate_target all [get_files  xilinx_bram_controller.srcs/sources_1/ip/xilinx_bram_controller/xilinx_bram_controller.xci]
catch { config_ip_cache -export [get_ips -all xilinx_bram_controller] }
export_ip_user_files -of_objects [get_files ./xilinx_bram_controller.srcs/sources_1/ip/xilinx_bram_controller/xilinx_bram_controller] -no_script -sync -force -quiet
create_ip_run [get_files -of_objects [get_fileset sources_1] ./xilinx_bram_controller.srcs/sources_1/ip/xilinx_bram_controller/xilinx_bram_controller.xci]
launch_runs -jobs 8 xilinx_bram_controller_synth_1
wait_on_run xilinx_bram_controller_synth_1
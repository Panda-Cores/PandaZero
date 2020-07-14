PRJNAME:=RVMicroController

.PHONY: ips

ips: xilinx_ddr3_controller

xilinx_ddr3_controller: 
	make -C ips/xilinx_ddr3_controller clean all

impl:
	make -C impl all

sim:
	make -C sim_verilator
	gtkwave sim_verilator/logs/vlt_dump.vcd

clean:
	make -C impl clean
	make -C ips/xilinx_ddr3_controller clean
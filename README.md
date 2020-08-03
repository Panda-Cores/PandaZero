# PandaZero
A RISC-V processor, destined to become a microcontroller!

Quick overview:
* RV32I ISA
* 5 Stage Pipeline
* Pipeline hazard detection & mitigation by HW via pipeline stalls
* Core connected to wishbone bus
* Debug module (not consistent with RV spec for debug modules, but supports extensive testing)

Upcoming features/improvements (in order of priority):
* L1 Instruction and data cache
* EEI
* Exception raising on illegal instruction
* Branch predictor
* Making debug module consistent with RV spec
* Extension to RV32F ISA (floating point)

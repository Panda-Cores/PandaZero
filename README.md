# PandaZero
A RISC-V processor, destined to become a microcontroller!

Quick overview:
* RV32I ISA (Missing instructions: FENCE, ECALL, EBREAK)
* 5 Stage Pipeline (IF, ID, EX, MEM, WB)
* Pipeline hazard detection & mitigation in hardware
* Core connected to wishbone bus
* Debug module (not consistent with RV spec for debug modules, but supports extensive testing)

Upcoming features/improvements (in order of priority):
* Remaining instructions (FENCE, ECALL, EBREAK)
* L1 Instruction and data cache
* EEI
* Exception raising on illegal instruction
* Branch predictor
* Making debug module consistent with RV spec
* Extension to RV32F ISA (floating point)

# PandaZero
A RISC-V processor, destined to become a microcontroller!

Quick overview:
* RV32I ISA
* 5 Stage Pipeline
* Write-Back instruction & data cache
* Simple branch predictor (predict backward branches as taken)
* Pipeline hazard detection & mitigation by HW via pipeline stalls
* Core connected to wishbone bus
* Debug module (not consistent with RV spec for debug modules, but supports extensive testing)

Upcoming features/improvements (in order of priority):
* Exception raising on illegal instruction
* Making debug module consistent with RV spec
* Extension to RV32F ISA (floating point)

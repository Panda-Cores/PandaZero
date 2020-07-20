# PandaZero
My very own RISC-V computer, which will maybe someday run as a microcontroller!

Features so far:
* 5 Stage Pipeline (IF, ID, EX, MEM, WB)
* Pipeline hazard detection & mitigation (via pipeline stall)
* Up to 1CPI
* Simple RAM (1KB)
* Most 32bit RISC-V instructions (some instructions are missing, such as fence & fence_i)
* Simple programs can run
* Core can be halted (but no debug module yet)

Upcoming features (in order of priority):
* Extensive testing
* Exception raising on illegal instruction
* Debug module
* Remaining instructions
* L1 Instruction and data cache
* Simple branch predictor

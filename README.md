# RVMicroController
My very own RISC-V computer, which will maybe someday run as a microcontroller!

Features so far:
* 5 Stage Pipeline (IF, ID, EX, MEM, WB)
* Pipeline hazard detection & mitigation (via pipeline stall)
* Simple RAM (1KB)
* Most 32bit RISC-V instructions (some instructions are missing, such as fence & fence_i)
* Simple programs can run

Upcoming features (in order of priority):
* Extensive testing
* Exception raising on illegal instruction
* Remaining instructions
* L1 Instruction and data cache
* Simple branch predictor

# PandaZero
A RISC-V processor, destined to become a microcontroller!

Features so far:
* 5 Stage Pipeline (IF, ID, EX, MEM, WB)
* Pipeline hazard detection & mitigation (via pipeline stall)
* Most 32bit RISC-V instructions (some instructions are missing, such as fence & fence_i)
* IF & MEM stages are wishbone masters on a common bus, which supports multiple masters/multiple slaves
* Debug module (simple one to read out memory and halt the core, not RISC-V spec consistent!)

Upcoming features (in order of priority):
* Extensive testing
* Exception raising on illegal instruction
* Remaining instructions
* Simple branch predicto
* L1 Instruction and data cache

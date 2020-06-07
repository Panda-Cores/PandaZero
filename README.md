# RVMicroController
My very own RISC-V computer, which will maybe someday run as a microcontroller!

Features so far:
* 5 Stage Pipeline (IF, ID, EX, MEM, WB)
* Basic load/store instructions (only word level so far)
* Basic arithmetic instructions (add, sub, shift,...) both register-register and register-immediate
* Memory controller

Upcoming features:
* Instructions on arbitrary level
* Actual Memory (currently a rough estimation)
* L1 Instruction and data cache
* Pipeline hazard detection (probably mitigation via pipeline stall)

For now out of scope:
* floating point unit
* ???

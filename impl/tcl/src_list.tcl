set RISCV_CORE " \
    $RTL/core/core_top.sv \
    $RTL/core/registerFile.sv \
    $RTL/core/pipelineStages/execute/EX_stage.sv \
    $RTL/core/pipelineStages/execute/alu_operations.sv \
    $RTL/core/pipelineStages/execute/alu.sv \
    $RTL/core/pipelineStages/instructionDecode/ID_stage.sv \
    $RTL/core/pipelineStages/instructionDecode/instructions.sv \
    $RTL/core/pipelineStages/instructionFetch/IF_stage.sv \
    $RTL/core/pipelineStages/mem/MEM_stage.sv \
    $RTL/core/pipelineStages/write_back/WB_stage.sv \
"

set MEMORY " \
    $RTL/memory/controller/mem_ctrl.sv \
    $RTL/memory/controller/memory.sv \
    $RTL/memory/mem_ctrl_top.sv \
"

set RVMICROCONTROLLER " \
    $RTL/riscv_top.sv
"
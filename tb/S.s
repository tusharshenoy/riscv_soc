# S.s — S-type instructions (store)
# Format: imm[11:5] | rs2 | rs1 | funct3 | imm[4:0] | opcode

.globl _start
_start:
    lui  x1, 0x1         # x1 = 0x1000 (data base address)
    addi x2, x0, 0xAB   # x2 = 0xAB  (value to store)
    addi x3, x0, 0x55   # x3 = 0x55
    addi x4, x0, 0xFF   # x4 = 0xFF

    sw   x2, 0(x1)       # MEM[0x1000] = 0xAB   SW = S-type
    sh   x3, 4(x1)       # MEM[0x1004] = 0x55   SH = S-type (halfword)
    sb   x4, 8(x1)       # MEM[0x1008] = 0xFF   SB = S-type (byte)

halt:
    jal  x0, halt

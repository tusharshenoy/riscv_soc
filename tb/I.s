# I.s — I-type instructions (immediate)
# Format: imm[11:0] | rs1 | funct3 | rd | opcode

.globl _start
_start:
    addi x1, x0, 5      # x1 = 0 + 5  = 5    (I-type)
    addi x2, x1, 10     # x2 = 5 + 10 = 15   (I-type)
    addi x3, x0, -3     # x3 = -3            (I-type, negative imm)
    andi x4, x2, 0xF    # x4 = 15 & 0xF = 15 (I-type)
    ori  x5, x0, 0xAB   # x5 = 0xAB          (I-type)
    xori x6, x5, 0xFF   # x6 = 0xAB ^ 0xFF   (I-type)
    slli x7, x1, 2      # x7 = 5 << 2 = 20   (I-type)
    srli x8, x7, 1      # x8 = 20 >> 1 = 10  (I-type)

halt:
    jal  x0, halt

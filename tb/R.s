# R.s — R-type instructions (register-register)
# Format: funct7 | rs2 | rs1 | funct3 | rd | opcode

.globl _start
_start:
    addi x1, x0, 10     # x1 = 10
    addi x2, x0, 4      # x2 = 4

    add  x3, x1, x2     # x3 = 10 + 4 = 14   (R-type)
    sub  x4, x1, x2     # x4 = 10 - 4 = 6    (R-type)
    and  x5, x1, x2     # x5 = 10 & 4 = 0    (R-type)
    or   x6, x1, x2     # x6 = 10 | 4 = 14   (R-type)
    xor  x7, x1, x2     # x7 = 10 ^ 4 = 14   (R-type)
    slt  x8, x2, x1     # x8 = (4 < 10) = 1  (R-type)

halt:
    jal  x0, halt

# B.s — B-type instructions (conditional branch)
# Format: imm[12|10:5] | rs2 | rs1 | funct3 | imm[4:1|11] | opcode

.globl _start
_start:
    addi x1, x0, 5      # x1 = 5
    addi x2, x0, 5      # x2 = 5
    addi x3, x0, 9      # x3 = 9

    # BEQ — branch if equal
    beq  x1, x2, beq_ok # 5 == 5 → branch taken  (B-type)
    addi x9, x0, 0xFF   # SKIPPED
beq_ok:
    addi x4, x0, 1      # x4 = 1  (reached)

    # BNE — branch if not equal
    bne  x1, x3, bne_ok # 5 != 9 → branch taken  (B-type)
    addi x9, x0, 0xFF   # SKIPPED
bne_ok:
    addi x5, x0, 2      # x5 = 2  (reached)

    # BLT — branch if less than
    blt  x1, x3, blt_ok # 5 < 9  → branch taken  (B-type)
    addi x9, x0, 0xFF   # SKIPPED
blt_ok:
    addi x6, x0, 3      # x6 = 3  (reached)

halt:
    jal  x0, halt

# U.s — U-type instructions (upper immediate)
# Format: imm[31:12] | rd | opcode
# Two instructions: LUI and AUIPC

.globl _start
_start:
    # LUI — Load Upper Immediate
    # Places 20-bit immediate into upper bits of register
    lui  x1, 0xABCDE    # x1 = 0xABCDE000       (U-type)
    lui  x2, 0x1        # x2 = 0x00001000        (U-type)

    # AUIPC — Add Upper Immediate to PC
    # Places 20-bit immediate + current PC into register
    auipc x3, 0x0       # x3 = PC + 0  (address of this line)  (U-type)
    auipc x4, 0x1       # x4 = PC + 0x1000                     (U-type)

    # Common use: LUI + ADDI to build any 32-bit constant
    lui   x5, 0x12345   # x5 = 0x12345000
    addi  x5, x5, 0x67  # x5 = 0x12345067

halt:
    jal  x0, halt

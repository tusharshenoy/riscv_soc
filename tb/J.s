# J.s — J-type instruction (unconditional jump)
# Format: imm[20|10:1|11|19:12] | rd | opcode
# Only instruction: JAL

.globl _start
_start:
    addi x1, x0, 1      # x1 = 1  (before jump)

    jal  x2, target      # J-type: jump to target, x2 = return address
    addi x1, x0, 99     # SKIPPED — never executes

target:
    addi x3, x0, 2      # x3 = 2  (after jump, this runs)

halt:
    jal  x0, halt        # J-type: halt loop

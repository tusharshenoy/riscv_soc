# startup.S — minimal bare-metal startup for rv32im
# Sets up stack pointer and calls main()

.section .text
.globl _start

_start:
    lui   sp, 0x2          # sp = 0x2000 (stack top)
    call  main             # call C main()
halt:
    jal   x0, halt         # loop forever when main returns

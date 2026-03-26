.section .text
.globl _start

_start:
    la sp, _stack_top      # Initialize stack pointer
    call main              # Call C main()

1:
    j 1b                   # Infinite loop if main returns

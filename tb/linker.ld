ENTRY(_start)
MEMORY {
    CODE (rx)  : ORIGIN = 0x00000000, LENGTH = 8K
    DATA (rwx) : ORIGIN = 0x00001000, LENGTH = 4K
    STACK(rwx) : ORIGIN = 0x00002000, LENGTH = 4K
}
SECTIONS {
    .text : { *(.text*) } > CODE
    .data : { *(.data*) *(.rodata*) } > DATA
    .bss  : { *(.bss*)  } > DATA
    /DISCARD/ : { *(.comment) *(.riscv.attributes) }
}

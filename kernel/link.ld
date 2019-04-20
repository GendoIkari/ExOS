ENTRY(loader)

SECTIONS {
    . = 0x00100000;

    .rodata :
    {
        *(.rodata*)
    }

    .text :
    {
        *(.text)
    }

    .data :
    {
        *(.data)
    }

    .bss :
    {
        *(COMMON)
        *(.bss)
    }
}

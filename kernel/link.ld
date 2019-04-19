ENTRY(loader)

SECTIONS {
    . = 0x00100000;

    .rodata ALIGN (0x1000) :
    {
        *(.rodata*)
    }

    .text ALIGN (0x1000) :
    {
        *(.text)
    }

    .data ALIGN (0x1000) :
    {
        *(.data)
    }

    .bss ALIGN (0x1000) :
    {
        *(COMMON)
        *(.bss)
    }
}

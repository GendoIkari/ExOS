#include <drivers/terminal.h>
#include <lib/types.h>

void kernel_main()
{
    Terminal terminal;
    terminalInit(&terminal);
    terminalPrintStr(&terminal, "Hello World!\0", 0, 0);

    while (1) {
    }
}

#include "terminal.h"
#include <lib/memory.h>

void terminalInit(Terminal* terminal)
{
    terminal->memory = (u8*)0xB8000;
    terminalClear(terminal);
}

void terminalClear(Terminal* terminal)
{
    memset(terminal->memory, 0, 80 * 25 * 2);
}

void terminalPutChar(Terminal* terminal, s8 character, s32 x, s32 y)
{
    terminalPutCharExt(terminal, character, x, y, TerminalColorWhite, TerminalColorLightGray);
}

void terminalPutCharExt(Terminal* terminal, s8 character, s32 x, s32 y, TerminalColor fg, TerminalColor bg)
{
    s32 index = y * (80 * 2) + (x * 2);
    terminal->memory[index] = character;
    terminal->memory[index + 1] = (fg & 0x0F << 4) | (bg & 0x0F);
}

void terminalPrintStr(Terminal* terminal, char* string, s32 x, s32 y)
{
    for (char* i = string; i != 0; ++i) {
        terminalPutChar(terminal, *i, x++, y);
    }
}

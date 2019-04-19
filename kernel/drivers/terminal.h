#pragma once

#include <lib/types.h>

typedef enum {
    TerminalColorBlack = 0,
    TerminalColorBlue,
    TerminalColorGreen,
    TerminalColorCyan,
    TerminalColorRed,
    TerminalColorMagenta,
    TerminalColorBrown,
    TerminalColorLightGray,
    TerminalColorDarkGray,
    TerminalColorLightBlue,
    TerminalColorLightGreen,
    TerminalColorLightCyan,
    TerminalColorLightRed,
    TerminalColorLightMagenta,
    TerminalColorLightBrown,
    TerminalColorWhite,
} TerminalColor;

typedef struct {
    volatile u8* memory;
} Terminal;

void terminalInit(Terminal* terminal);
void terminalClear(Terminal* terminal);
void terminalPutChar(Terminal* terminal, s8 character, s32 x, s32 y);
void terminalPutCharExt(Terminal* terminal, s8 character, s32 x, s32 y, TerminalColor fg, TerminalColor bg);
void terminalPrintStr(Terminal* terminal, char* string, s32 x, s32 y);

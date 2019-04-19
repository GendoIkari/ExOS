#include "memory.h"

void memset(u8* address, u8 value, u32 size)
{
    for (u32 i = 0; i < size; ++i) {
        address[i] = value;
    }
}

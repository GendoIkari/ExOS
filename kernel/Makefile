CFLAGS = -I. -m32 -nostdlib -nostdinc -fno-builtin -fno-stack-protector \
		 -nostartfiles -nodefaultlibs -Wall -Wextra -c

OBJECTS = loader.o kmain.o \
		  lib/memory.o \
		  drivers/terminal.o

all: kernel.elf

kernel.elf:	$(OBJECTS)
	ld -T link.ld -melf_i386 $(OBJECTS) -o kernel.elf

%.o: %.c
	gcc $(CFLAGS) $< -o $@

%.o: %.asm
	nasm -f elf32 $< -o $@

.PHONY: clean
clean:
	rm kernel.elf
	rm *.o

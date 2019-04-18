CFLAGS = -m32 -nostdlib -nostdinc -fno-builtin -fno-stack-protector \
		 -nostartfiles -nodefaultlibs -Wall -Wextra -Werror -c

all: kernel.elf

kernel.elf:	loader.o kmain.o
	ld -T link.ld -melf_i386 loader.o kmain.o -o kernel.elf

%.o: %.c
	gcc $(CFLAGS) $< -o $@

%.o: %.asm
	nasm -f elf32 $< -o $@

.PHONY: clean
clean:
	rm kernel.elf
	rm *.o

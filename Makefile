.PHONY: iso
iso:
	cp kernel/kernel.elf iso/boot
	genisoimage -R                          \
			-b boot/grub/stage2_eltorito    \
			-no-emul-boot                   \
			-boot-load-size 4               \
			-A exos                         \
			-input-charset utf8             \
			-quiet                          \
			-boot-info-table                \
			-o exos.iso                     \
			iso

.PHONY: run
run:
	bochs -f bochsrc.txt -q

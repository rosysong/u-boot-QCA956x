OUTPUT_FORMAT("elf32-tradbigmips", "elf32-tradbigmips", "elf32-tradbigmips")
OUTPUT_ARCH(mips)
ENTRY(_start)
SECTIONS
{
	. = 0x00000000;

	. = ALIGN(4);
	.text       :
	{
	  *(.start)
	  *(.text*)
	}

	. = ALIGN(4);
	.rodata  : { *(SORT_BY_ALIGNMENT(SORT_BY_NAME(.rodata*))) }

	. = ALIGN(4);
	.data  : { *(.data*) }

	. = .;
	_gp = ALIGN(16);

	.got  : {
	__got_start = .;
		*(.got)
	__got_end = .;
	}

	. = ALIGN(4);
	.sdata  : { *(.sdata*) }

	. = ALIGN(4);
	.u_boot_list : {
		KEEP(*(SORT(.u_boot_list*)));
	}

	uboot_end_data = .;
	num_got_entries = (__got_end - __got_start) >> 2;

	. = ALIGN(4);
	.sbss  : { *(.sbss*) }
	.bss  : { *(.bss*) . = ALIGN(4); }
	uboot_end = .;
}

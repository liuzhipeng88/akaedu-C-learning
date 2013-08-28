/*My simplest lds file */
ENTRY(stack)
SECTIONS
{
	. = 0x0;
	.text     :
	{
		stack.o (.text)
		main.o	(.text)
	}
	.data		:{*(.data)}
	.bss		:{ *(.bss)}
}

.section .data

.LC0:
	.string"hello,akaedu\n"
	.text

.globl _start
_start:

#write(1,"hello,akaedu",10);

	movl $4, %eax
	movl $1, %ebx
	movl $.LC0, %ecx
	movl $13, %edx
	int	 $0x80

#exit(0)
	movl $1,%eax
	movl $0,%ebx
	int  $0x80

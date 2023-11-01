	.file	"file2.c"
	.text
	.section .rdata,"dr"
.LC0:
	.ascii "hello %d\0"
	.text
	.globl	print
	.def	print;	.scl	2;	.type	32;	.endef
	.seh_proc	print
print:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$32, %rsp
	.seh_stackalloc	32
	.seh_endprologue
	movl	%ecx, 16(%rbp)
	movl	16(%rbp), %edx
	leaq	.LC0(%rip), %rcx
	call	printf
	nop
	addq	$32, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.ident	"GCC: (GNU) 9.2.0"
	.def	printf;	.scl	2;	.type	32;	.endef

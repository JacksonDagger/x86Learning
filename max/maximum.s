	.section	__TEXT,__text,regular,pure_instructions
	.build_version macos, 10, 14
	.globl	_maximum                ## -- Begin function maximum
	.p2align	4, 0x90
_maximum:                               ## @maximum
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	movq	%rdi, -16(%rbp)
	movq	%rsi, -24(%rbp)
	movq	-16(%rbp), %rsi
	cmpq	-24(%rbp), %rsi
	jle	LBB0_2
## %bb.1:
	movq	-16(%rbp), %rax
	movq	%rax, -8(%rbp)
	jmp	LBB0_3
LBB0_2:
	movq	-24(%rbp), %rax
	movq	%rax, -8(%rbp)
LBB0_3:
	movq	-8(%rbp), %rax
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function

.subsections_via_symbols

        .text
        .globl  _insertion_sort
_insertion_sort:
	pushq %r10
	movq $0, %rax
	movq $1, %rcx	# i = 1
	addq $8, %rsi 	# incrementing base pointer of array
outer_for:
	incq %rax
	cmpq %rcx, %rdi	# checking if fxn has reached end of list
	jg	finish
	movq (%rsi), %rdx	# storing val = array[i] in %rdx
	movq %rcx, %r8	# j = i
	movq %rsi, %r9	# r9 stores address of array[j]
	subq $8, %r9	# r9 now stores address of array[j-1]
inner_for:
	andq %rcx, %rcx	# check that j > 0
	jle end_inner
        movq (%r9), %r10        # %r10 stores value pf array[j-1]
	cmpq %rdx, %r10	# comparing array[i] and array[j-1]
	jle end_inner
	movq %r10, 8(%r9)	# array[j] = array[j-1]
	subq $8, %r9    # decrementing pointer to array[j-1]
	decq %r8	# decrementing j
	jmp inner_for
end_inner:
	movq %rdx, 8(%r9)	# arr[j] = val
	incq %rcx	# i++
	addq $8, %rsi	# i++
	jmp outer_for
finish:
	popq %r10
	ret

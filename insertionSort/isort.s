        .text
        .globl  _insertion_sort
_insertion_sort:
	movq $8, %rdx # i = 1
	movq $8, %rcx # size of a long
outer_for:
	
inner_for:

end_inner:
finish:
	ret

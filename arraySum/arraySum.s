        .text
        .globl  _arraySum
/*
function returns the sum of all elements in an array of longs.
@param length-%rdi-the length of the array
@param arr-%rsi-pointer to the start of the array of longs
*/
_arraySum:
	movq	$0, %rax	# set intial sum to 0
        movq    $8, %r9		# size of long in bytes
sum:
        andq	%rdi, %rdi	# check if length is 0 (end of array)
        jle	finish		# return sum if we are at end of array
	movq	(%rsi), %r8	# retrieve element from array
	addq	%r9, %rsi	# incrementing array pointer to next element
	addq    %r8, %rax	# adding element to retrun sum
	dec	%rdi		# decrementing the length (when length = 0, end of array has been reached)
	jmp	sum		# looping back to jumo to finish or sum another element
finish:
        ret

        .text
        .globl  _max 
_max:
        cmpq    %rdi, %rsi
        jg      second
        movq    %rdi, %rax
        ret 
second:
        movq    %rsi, %rax
        ret 

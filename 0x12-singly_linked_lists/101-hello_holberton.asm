section .rodata
        str1 db "Hello, Holberton",0x0a,0

section .text
        global _start

_start:
        push rbp
        mov rbp, rsp

        mov edi, str1
        xor eax, eax
        call printf

        mov eax, 0
        pop rbp
        ret

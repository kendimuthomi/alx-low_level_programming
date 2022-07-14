; My comments: learning to write using assembly code
; Auth: Jackline kendi muthomi
; Description: Write a 64-bit program in assembly language
; thet prints Hello, Holberton followed by a new line

extern printf

section .text
 global main

main:
    push rbp

    mov rdi,fmt
    mov rsi,msg
    mov rax,0
    call printf

    pop rbp

    mov rax,0
    ret

section .data
   msg: db "Hello, Holberton", 0
   fmt: db "%s", 10, 0

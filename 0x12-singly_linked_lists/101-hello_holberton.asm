section .data
  hello db 'Hello, Holberton', 10, 0

section .text
  global main
  extern printf

main:
  push rbp
  mov rbp, rsp

  push qword hello
  call printf
  add rsp, 8

  mov eax, 0
  pop rbp
  ret

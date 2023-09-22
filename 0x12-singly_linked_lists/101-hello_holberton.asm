global main

section .text
main:
  mov rdi, message
  call printf
  mov rax, 60
  xor rdi, rdi
  syscall
section .data
message: db "Hello, Holberton\n", 0

section .data
	hello db "Hello, Holberton",0
	format db "%s", 10, 0

section .text
	global main
	extern printf

main:
	sub rsp, 8          ; Align the stack
	mov rdi, format
	mov rsi, hello
	xor rax, rax        ; Clear RAX for printf return value
	call printf
	add rsp, 8          ; Restore the stack
	xor rax, rax
	ret

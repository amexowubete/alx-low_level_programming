section .data
	hello db 'Hello, Holberton',0
	newline db 10,0 

section .text
	global main
	extern printf

main:
	push rbp
	mov rbp, rsp
	
	; call printf to print hello string
	mov rdi, hello
	xor rax, rax
	call printf
	
	; call printf to print new line
	mov rdi, newline
	xor rax, rax
	call printf
	
	xor rax, rax
	pop rbp
	ret

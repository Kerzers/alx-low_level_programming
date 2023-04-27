section .data
	adresse db 'Hello, Holberton',10

section .text
	global main
	extern printf
main:
	mov edi, adresse
	xor eax, eax
	call printf
	xor eax, eax
	ret

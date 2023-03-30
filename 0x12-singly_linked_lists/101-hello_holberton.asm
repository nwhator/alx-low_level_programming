; File: 101-hello_holberton.asm
; Author: Promise Nwhator
; Description: 64-bit program in assembly that prints Hello,
; 		Holberton, followed by a new line.

section .data
	txt: db "Hello, Holberton", 10
	; String (hello) contains message to be printed, stores with newline

section .text
	global main
	; main is the entry point of the program
	extern printf
	; Import printf function from C

main:
	push rbp
	; push base pointer onto the stack
	mov rbp, rsp
	; move stack pointer(rsp) into base pointer(rbp)

	; This is to push printf onto the stack
	lea rdi, [txt]
	; load(lea - command to load) address of txt string to rdi
	; rdi(register destination index) - destination for data copies
	xor eax, eax
	; clear eax register
	; xor - Betwenn eax register and itself (XOR - Bitwise operator)
	; eax - Extended Accumulator
	call printf

	; Free stack and exit to avoid segmentation error
	mov rsp, rbp
	; restore stack pointer
	pop rbp
	; restore base pointer
	xor eax, eax
	ret
	; return command

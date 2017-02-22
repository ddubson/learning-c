	.section	__TEXT,__text,regular,pure_instructions
	.macosx_version_min 10, 12
	.intel_syntax noprefix
	.globl	_main
	.align	4, 0x90
_main:                                  ## @main
	.cfi_startproc
## BB#0:
	push	rbp
Ltmp0:
	.cfi_def_cfa_offset 16
Ltmp1:
	.cfi_offset rbp, -16
	mov	rbp, rsp
Ltmp2:
	.cfi_def_cfa_register rbp
	sub	rsp, 16
	lea	rdi, [rip + L_.str]
	mov	dword ptr [rbp - 4], 0
	mov	al, 0
	call	_printf
	mov	edi, 2
	mov	esi, 4
	mov	dword ptr [rbp - 12], eax ## 4-byte Spill
	call	_add
	xor	esi, esi
	mov	dword ptr [rbp - 8], eax
	mov	eax, esi
	add	rsp, 16
	pop	rbp
	ret
	.cfi_endproc

	.globl	_add
	.align	4, 0x90
_add:                                   ## @add
	.cfi_startproc
## BB#0:
	push	rbp
Ltmp3:
	.cfi_def_cfa_offset 16
Ltmp4:
	.cfi_offset rbp, -16
	mov	rbp, rsp
Ltmp5:
	.cfi_def_cfa_register rbp
	mov	dword ptr [rbp - 4], edi
	mov	dword ptr [rbp - 8], esi
	mov	esi, dword ptr [rbp - 4]
	add	esi, dword ptr [rbp - 8]
	mov	eax, esi
	pop	rbp
	ret
	.cfi_endproc

	.section	__TEXT,__cstring,cstring_literals
L_.str:                                 ## @.str
	.asciz	"Hello World!\n"


.subsections_via_symbols

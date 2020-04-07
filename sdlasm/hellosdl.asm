EXTERN SDL_Init

SECTION .text
global _start

_start:
; Init SDL screen
    push 0x20
    call SDL_Init

; Exit peacefully
    mov eax, 1
    mov ebx, 0
    int 0x80

section .data
    hello db "Hello, Holberton",10 ; 10 is the ASCII code for newline character
    format db "%s",0              ; Format string for printf

section .text                   ; This section contains the program instructions
    global main

    extern printf                ; Declare printf as an external symbol

main:
    sub rsp, 8                   ; Align the stack to 16 bytes
    mov rdi, format              ; Load the format string address into rdi
    mov rsi, hello               ; Load the address of the hello message into rsi
    call printf                  ; Call the printf function
    add rsp, 8                   ; Restore the stack pointer

    mov rax, 60                  ; Exit syscall number
    xor rdi, rdi                 ; Exit status (0)
    syscall                      ; Invoke syscall to exit


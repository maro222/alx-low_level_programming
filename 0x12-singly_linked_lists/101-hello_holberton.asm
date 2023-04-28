org 100h

.model small
.data
	myvar db "Hello, Holberton$"
.code
main proc
   mov ax,@data
   mov ds,ax

   mov dx,offset myvar
   lea dx,myvar

   mov ah,20
   int 21h
main endp

ret

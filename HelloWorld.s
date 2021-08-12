.global _start

.macro print_txt address, length
		addi  a0, x0, 1
		la    a1, \address
		addi  a2, x0, \length
		addi  a7, x0, 64
		ecall 
.endm

_start:
		call _print
		print_txt msg2, 13
		print_txt msg3, 13
		call _exit
	
_exit:
		addi    a0, x0, 0   #return 0
		addi    a7, x0, 93  #define SYS_exit 93
		ecall  
		            
_print:
		addi  a0, x0, 1     #1 = StdOut
		la    a1, msg 		#load address
		addi  a2, x0, 13	#string length
		addi  a7, x0, 64	#define SYS_write 64
		ecall 
		ret
		
.section .rodata
msg:
		.ascii "Hello World!\n"
		
msg2:
		.ascii "Hello again!\n"

msg3:
		.ascii "again again!\n"



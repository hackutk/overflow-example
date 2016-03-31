all:
	gcc -z execstack -D_FORTIFY_SOURCE=0 -O0 -m32 -fno-stack-protector -o overflow overflow.c

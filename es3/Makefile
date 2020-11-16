CFLAGS=-ansi -Wpedantic -Wall -Werror

all:		main.exe

main.exe:	main.o
		gcc ${CFLAGS} -o main.exe main.o

main.o:		main.c
		gcc -c ${CFLAGS} -D'ALLOCAVETTORE(PTR)=do { PTR=(int32_t*)malloc(10*sizeof(int32_t)); if (PTR!=NULL) { int j; for(j=0; j<10; j++) {PTR[j]=-1000+j; }}} while(0)' main.c

.PHONY:		clear

clean:
		-rm *.exe *.o

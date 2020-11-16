CFLAGS=-ansi -Wpedantic -Wall -Werror

all:		main.exe

main.exe:	main.o macro.h
		gcc ${CFLAGS} -o main.exe main.o

main.o:		main.c
		gcc -c ${CFLAGS} main.c

.PHONY:		clear

clean:
		rm *.exe *.o

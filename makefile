all: main.o list.o
	gcc -o program main.o list.o

main.o: main.c list.h
	gcc -c -g main.c

list.o: list.c list.h
	gcc -c -g list.c

run:
	./program

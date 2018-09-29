all: 04str.o newstring.o
	gcc 04str.o newstring.o

04str.o: 04str.c newstring.h
	gcc -c 04str.c

newstring.o: newstring.c newstring.h
	gcc -c newstring.c

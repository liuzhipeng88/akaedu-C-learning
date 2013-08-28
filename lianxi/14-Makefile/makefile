CC = gcc
TEST := $(CC) 
CC = cc
TEST ?= $(CC)
#TEST:= $(TEST)  $(CC)

all: main
	echo ok!
	echo $(TEST)

main:main.o add.o sub.o
	$(CC) main.o add.o sub.o -o main

main.o:main.c 
	$(CC) -c main.c

add.o:add.c
	$(CC) -c add.c
		
sub.o: sub.c
	$(CC) -c sub.c

%.o: %.c
	$(CC) - g -c $< -o $@


.PHONY: clean
c clean:
	-rm main
	-rm *.o


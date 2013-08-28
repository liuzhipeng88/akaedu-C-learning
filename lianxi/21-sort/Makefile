src = $(wildcard *.c)
obj = $(patsubst %.c, %, $(src))
CC = gcc
all: $(obj)
%:%.c
	$(CC) -o $@  $<

slean:
	-rm -f $(obj)
	-rm -f *~

.PHONY:clean

test:
	time -p ./bubble
	time -p ./selection
	time -p ./insert	

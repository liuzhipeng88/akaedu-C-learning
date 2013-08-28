src = $(wildcard *.c)
obj = $(patsubst %.c, %, $(src))

CFLAGS = -Wall -g
LDFLAGS = 

all: $(obj)

.PHONY: clean

clean:
	$(RM) $(obj)

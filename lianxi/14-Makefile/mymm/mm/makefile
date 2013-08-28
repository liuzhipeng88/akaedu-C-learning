CC = gcc

MYPWD := `pwd`
MYDATE = `date`
MYPRJ = $(notdir $(PWD))
SRC = $(wildcard *.c)
HEAD = $(wildcard *.h)
OBJ = $(SRC:.c=.o)

all: $(MYPRJ)
	echo  ok,finished!

ifeq (.depend, $(wildcard .depend))

include .depend

else 

endif

dep:
	-rm .depend
	for i in $(SRC);do gcc -MM $$i >> .depend; done
	cat .depend

old:
	gcc -MM main.c > depend
	gcc -MM add.c >> depend
	gcc -MM sub.c >> depend
	cat .depend

$(MYPRJ): $(OBJ)
	@echo + linking...$^ to $@
	$(CC) $^ -o $@
%.o: %.c
	@echo + linking...$^ to $@
	$(CC) -c -g $< -o $@
	
c clean:
	-rm $(OBJ)
	-rm $(MYPRJ)
	-rm .depend

test:
	@echo current dir is $(MYPWD)
	@echo time is $(MYDATE)
	@echo project is $(MYPRJ)
	@echo source .c file is $(SRC)
	@echo source .h file is $(HEAD)
	@echo obj .o file is $(OBJ)

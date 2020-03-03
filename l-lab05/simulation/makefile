CC=gcc
CFLAGS=-O3
LDFLAGS=-lm
EXE=prog
OBJ=main.o simulation.o

$(EXE): main.o simulation.o
	$(CC) $(LDFLAGS) -o $@ $^

%.o:%.c
	$(CC) $(LDFLAGS) -c $<

.PHONY: clean
clean:
	rm *.o
	rm $(EXE)

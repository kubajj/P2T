# Comments in Make can look like this
CC=gcc
EXE=myprog

CFLAGS=
LDFLAGS=

OPTCFLAGS=-O2
DEBUGCFLAGS=-g

OBJ=main.o util.o

# Default Target, dependency on $(EXE) target
all: $(EXE)

# Optimised target, add OPTCFLAGS
opt: CFLAGS+=$(OPTCFLAGS)
opt: $(EXE)

# Debug target, add DEBUG Flags
debug: CFLAGS+=$(DEBUGCFLAGS)
debug: $(EXE)

$(EXE): $(OBJ)
	$(CC) $(LDFLAGS) -o $@ $^ 

%.o:%.c
	$(CC) $(CFLAGS) -c $<

.PHONY: clean test
clean:
	rm *.o
	rm $(EXE) 

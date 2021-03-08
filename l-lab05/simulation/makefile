CC=gcc
CCFLAGS=-Wall -g -O2
LIBS=-lm
OBJECTS=main.o simulation.o
EXE=mycode

all: clean $(EXE)

$(EXE): $(OBJECTS)
	$(CC) $(CCFLAGS) -o $@ $^ $(LIBS)

# Target for both main.o and simualtion.o as they are defined as OBJECTS
%.o: %.c
	$(CC) $(CCFLAGS) -c $^

run: $(EXE)
	./$(EXE) > sim.data

.PHONY: clean

# Remove obejct files
clean:
	rm -f *.o

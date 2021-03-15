# Compiler
CC=gcc

# Compiler flags
CCFLAGS=-Wall -std=c99

# Libraries
LIBS=

# Make executable
mycode: main.o printpgm.o
	$(CC) $(CCFLAGS) -o $@ $^ $(LIBS)

# MAke object files
%.o: %.c
	$(CC) $(CCFLAGS) -c $^

# Declare target clean as phony
.PHONY: clean

# Remove all files created during compilation
clean:
	rm -f *.o mycode

# Define variables
CC=gcc
CCFLAGS=-Wall -g  -std=c99
LIBS=

# The following target links object files into an executable
mycode: main.o printpgm.o
	$(CC) $(CCFLAGS) -o $@ $^ $(LIBS)

# The following target compiles the C source code files into object files
%.o: %.c
	$(CC) $(CCFLAGS) -c $^

# Enable phony target clean
.PHONY: clean

# The following target removes executable and object files
clean:
	rm -f *.o mycode

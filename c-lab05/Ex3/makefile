# Specify compiler
CC=gcc

# Enable warnings
CCFLAGS=-Wall

# Link math library
LIBS=-lm

# Link object files into executable
mycode: main.o complexmath.o validate.o
	$(CC) $(CCFLAGS) -o $@ $^ $(LIBS)

# Compile object files
%.o : %.c
	$(CC) $(CCFLAGS) -c $^

.PHONY: clean

# Remove object files and executable
clean:
	rm -f *.o mycode

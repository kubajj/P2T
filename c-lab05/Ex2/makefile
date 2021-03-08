# This makefile is made for brutha
# It assumes that there is a file turtle.h and libturtle.a in /usr/share/p2t/lab05/Exe2/

# Compiler variable
CC=gcc

# Compiler flags
CCFLAGS=-Wall -std=c99

# Libraries path
LIBS=/usr/share/p2t/lab05/Exe2/

# Headers path
HEADERS=/usr/share/p2t/lab05/Exe2/

# Libraries flags
LDFLAGS=-lturtle -lm

# Path to source code
SOURCE=external_libraries.c

# Names of executables
EXE=square polygon

# Main target - first remove all executables and then recompile the new ones
all: clean $(EXE)

# Compile the executables
$(EXE): 
	$(CC) $(SOURCE) -I $(HEADERS) -L $(LIBS) $(LDFLAGS) -o $@

# Enable phony target clean
PHONY: clean

# The following target removes the executables
clean:
	rm -f $(EXE)

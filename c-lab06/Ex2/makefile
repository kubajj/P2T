CC = gcc
CCOPTS = -std=c99

# MT.o needs to be linked
randtest: main.c randu.o MT.o test.o 
	$(CC) $(CCOPTS) $^ -o $@ -lm

test.o: test.c test.h
	$(CC) $(CCOPTS) -c test.c

.PHONY: clean	 

clean:
	rm -f *.o *.dat randtest

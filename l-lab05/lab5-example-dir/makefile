CC=gcc
objs= histogram.o draw.o util.o

histogram: $(objs) 
	$(CC) $^ -o $@ 

histogram.o: histogram.c
	$(CC) -c $< 

draw.o: draw.c
	$(CC) -c $<

util.o: util.c
	$(CC) -c $<


.PHONY: clean test
test:
	./histogram
clean:
	rm *.o
	rm histogram

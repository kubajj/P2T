#include "util.h"

void generateRandomData(int *data, int len) {
	
	int i;
	int *dataptr = data;

	srand(time(NULL));
	for(i=0; i<len; i++) {
		*dataptr = rand() % 100;
		*dataptr++;
	}
}

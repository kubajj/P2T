#include <stdio.h>
#include "util.h"

#define SIZE_OF_DATA 10

int main(void) {
	int data[SIZE_OF_DATA];
		
	generateRandomData(data, SIZE_OF_DATA);


	int i;
	for(i=0; i<SIZE_OF_DATA; i++){
		printf("%d: %d\n",i,data[i]);
	}

	return 0;
}


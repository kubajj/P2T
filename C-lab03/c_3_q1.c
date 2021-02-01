#include <stdio.h>

int main() {
	// initialize all the values
	unsigned short width, height;
	width = 16;
	height = 16;
	// max is the maximum value of the pgm
	int max = width * height -1;
	// initialize the "D array
	unsigned short matrix[height][width];
	// fillin the array with values and print the output in one nested forloop
	printf("P2 %d %d %d\n", width, height, max);
        for (int i = 0; i < height; i++) {
		// nested loop, which calculates the values
		for (int j = 0; j < width; j++) {
			// calculate the value, it could be just printed without storing the value in the array, but if we wanted to use the array, we could
			matrix[i][j] = i*16 + j;
			// print the value
			printf("%d ", matrix[i][j]);
		}
		// print a newline (separate the lines of the image)
		printf("\n");
	} 	
	// terminate
	return 0;
}

#include <stdio.h>

// define methods and their return values
void fillInArray(int width, int height, unsigned short matrix[height][width]);
void printPGM(int width, int height, unsigned short matrix[height][width]);

int main() {
	// define variables
	unsigned short width, height;
	// initialize variables
	width = 16;
	height = 16;
	unsigned short matrix[height][width];
	// call methods (functions)
	fillInArray(width, height, matrix);
	printPGM(width, height, matrix);
	// terminate
	return 0;
}

// define body of the function, which puts values into the array, array is in scope, because we passed it as an argument and it was called from main, so no need for returning it
void fillInArray(int width, int height, unsigned short matrix[height][width]) {
	// loop through all the elements of the array and assign values to create a gradient
	for (int i = 0; i < height; i++) {
		for (int j = 0; j < width; j++) {
			// assign a value to the current element
			matrix[i][j] = i*16 + j;
		}
	}
}

// define body of the printing function
void printPGM(int width, int height, unsigned short matrix[height][width]) {
	int max = width * height - 1;
	// print the first line
	printf("P2 %d %d %d\n", width, height, max);
	// loop through all the elements of the array
	for (int i = 0; i < height; i++) {
		for (int j = 0; j < width; j++) {
			// print the element
			printf("%d ",matrix[i][j]);
		}
		// after each line, print newline symbol
		printf("\n");
	}
}

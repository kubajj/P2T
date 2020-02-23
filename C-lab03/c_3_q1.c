#include <stdio.h>

int main() {
	unsigned short width, height;
	width = 16;
	height = 16;
	int max = width * height -1;
	unsigned short matrix[height][width];
	// create the array and print the output in one nested for loop
	printf("P2 %d %d %d\n", width, height, max);
        for (int i = 0; i < height; i++) {
		for (int j = 0; j < width; j++) {
			matrix[i][j] = i*16 + j;
			printf("%d ", matrix[i][j]);
		}
		printf("\n");
	} 	
	return 0;
}

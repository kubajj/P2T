#include <stdio.h>

struct TwoDPoint {
	double x, y;
};

// we have to define our structure type, so we do not need to specify that our variable is a strct every time we create it
typedef struct TwoDPoint TwoDPoint_t; 

int main(void) {
	TwoDPoint_t a, b = {0.0 ,0.0};
	{
		// I think that it does not have to be in a separate block, we are not using any variable with same name as in the main scope, so it should be fine
		// Author probably intended to tell the compiler that input is only used in this block, so it can delete it afterwards and that any other input outside of the block is for sure not this one
		char input[100];
		puts("Please enter the x and y coordinates of the 1st point, separated by a comma.");

		fgets(input, sizeof(input), stdin);
		sscanf(input,"%lf,%lf", &(a.x), &(a.y)); // we have to point to the memory location of a.x and a.y
		// we also have to use %lf, because the variable that we are reading is double
		
		puts("Please enter the x and y coordinates of the 2nd point, separated by a comma.");
		fgets(input, sizeof(input), stdin);
		sscanf(input,"%lf,%lf", &(b.x), &(b.y));
		// changes in the other sscanf are almost the same
	}
	
	double x_dist = (a.x - b.x), y_dist = (a.y - b.y);
	printf("The square of the distance between the two points is: %f\n", (x_dist*x_dist)+(y_dist*y_dist));

	return 0;
}

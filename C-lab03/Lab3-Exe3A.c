#include <stdio.h>

struct TwoDPoint {
	double x, y;
};

typedef struct TwoDPoint TwoDPoint_t; 

int main(void) {
	int number_of_points = 2; // this value shoud be >= 2
	TwoDPoint_t points[number_of_points];
	{
		char input[100];
		for (int i = 0; i < number_of_points; i++) {
			puts("Please enter the x and y coordinates of the 1st point, separated by a comma.");
	
			fgets(input, sizeof(input), stdin);
			sscanf(input,"%lf,%lf", &(points[i].x), &(points[i].y));
		}
	}

	// here, we can define any operation, I just left here the operation that was already implemented
	double x_dist = (points[0].x - points[1].x), y_dist = (points[0].y - points[1].y);
	printf("The square of the distance between the two points is: %f\n", (x_dist*x_dist)+(y_dist*y_dist));

	return 0;
}

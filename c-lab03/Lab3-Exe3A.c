#include <stdio.h>

// This is my solution to the second part of the third exercise of C Lab03
// for course P2T 2021
// Jakub Jelinek

// Define structure 2D point
struct TwoDPoint {
  double x, y;
};
// Make typedef accessible before the handle input method
typedef struct TwoDPoint TwoDPoint_t;

// Alter the input handling to make it more "generic"
// This method handles the input adn writing to the struct
void handle_input(TwoDPoint_t *p) {
  // Read input
  char input [100];
  puts("Please enter the x and y coordinates of the point , separated by a comma.");
  // Store input
  fgets(input , sizeof(input), stdin);
  // Split the input and write the values to the struct
  sscanf(input ,"%lf,%lf", &((*p).x), &((*p).y));
}

int main(void) {
  // Create an array of 2D points
  TwoDPoint_t points[5];
  // Initialise integer for the loop
  int i;
  // Loop through five points, ask for values each time
  for (i = 0; i < 5; i++) {
    handle_input(&points[i]); 
  }
  // Calculate square of distance between first two points
  double x_dist = (points[0].x - points[1].x), y_dist = (points[0].y - points[1].y);
  // Print the result
  printf("The square of the distance between the two points is: %f\n", (x_dist*x_dist)+(y_dist*y_dist));
  // Terminate
  return 0;
}

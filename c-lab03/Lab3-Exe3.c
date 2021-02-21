#include <stdio.h>

// This is my solution to the first part of the third exercise of C Lab03
// for course P2T 2021
// Jakub Jelinek

// Define structure 2D point
struct TwoDPoint {
  double x, y;
};

int main(void) {
  // The following line is needed if we want to use TwoDPoint_t,
  // as we would need to use struct TwoDPoint a everytime we use
  // the structure TwoDPoint
  typedef struct TwoDPoint TwoDPoint_t;
  TwoDPoint_t a, b = {0.0 ,0.0};
  {
    // input handling is in this block so that the input specific variables are not allocated after the block is
    // finished anymore
    // It does not have to be in the block, but it is neater 
    char input [100];
    puts("Please enter the x and y coordinates of the 1 st point , separated by a comma.");
    fgets(input , sizeof(input), stdin);
    // double is %lf not %f - that's float
    // sscanf needs the address of the variable to modify it, so &x rather than just x
    sscanf(input ,"%lf,%lf", &(a.x), &(a.y));
    puts("Please enter the x and y coordinates of the 2 nd point , separated by a comma.");
    fgets(input , sizeof(input), stdin);
    sscanf(input ,"%lf,%lf", &(b.x), &(b.y));
  }
  double x_dist = (a.x - b.x), y_dist = (a.y - b.y);
  printf("The square of the distance between the two points is: %f\n", (x_dist*x_dist)+(y_dist*y_dist));
  // Terminate
  return 0;
}

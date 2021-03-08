#include <stdio.h>
#include <math.h>
#include "complexmath.h"
#include "validate.h"

// This is my solution to the third exercise of C lab 5 for course P2T 2021
// Jakub Jelinek

// The code was provided by Samuel Skipsey
// I just refactored it

// This program find the cube roots of a number read as argument
int main(int argc , char * argv[]) {
  // Declare variables
  double x, cub_x , re_cub_x , im_cub_x;

  // Validate input and read in the number
  x = validate_input(argc , argv);

  // Calculate real cube root
  cub_x = cbrt(x);

  // Calculate the real part of the imaginary cube roots
  re_cub_x = re_complexroots(cub_x);

  // Calculate the imaginary part of the imaginary cube roots
  im_cub_x = im_complexroots(cub_x);

  // Print the three cube roots
  printf("The cube roots of %f are %f, %f + %fi and %f - % fi.\n", x, cub_x ,
  re_cub_x , im_cub_x , re_cub_x , im_cub_x );

  // Terminate execution
  return 0;
}



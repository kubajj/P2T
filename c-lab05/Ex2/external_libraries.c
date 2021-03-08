#include <stdio.h>
#include <string.h>
#include <libgen.h>
#include <turtle.h>

// This is my solution to the second exercise of the C lab 5 for course P2T 2021
// Jakub Jelinek

// Define functions prototypes
void help(void);

// This program implements the turtle library and prints a polygon of n sides
// In case of executable with name "square" - n=4
// All other cases need n as an argument
int main(int argc, char *argv[]) {
  // Number of sides
  int n;

  // Handle input
  if (argc == 1) {
    // Basename extracts the last part of the path, 
    // so "Ex2/square" ends up as "square"
    char *square = basename(argv[0]);

    // Compare if string square is equal to the basename
    // of first argument (name of executable)
    if (strcmp(square, "square")==0) {
      n=4;
    // Otherwise print help function
    } else {
      help();
      return 0;
    }
  } else {
    // Try to read in a number from the second argument
    if (sscanf(argv[1], "%d", &n) != 1) {
      // If no number was found, input is invalid
      puts("Invalid input.");
      help();
      return 1;
    }
  }

  // Initialise the dimensions of the board
  int w = 256;
  int h = 256;

  // Initialise size of side
  // It is dependant on n so that the sides are not too long
  // and fit to the dimensions
  int size = (1.0*w)/n;

  // Initialise the field
  turtle_init(w, h);

  // Declare iterator
  int i;

  // Loop through sides
  for (i = 0; i < n; i++) {
    // Move lenght of side forward
    turtle_forward(size);

    // Rotate by appropriate angle
    double angle = 360.0/n;

    // The angle was calculated from the following equation:
    // We have 180-inner angle, where inner angle is 180(n-2)/n, so we have
    // (180n-180(n-2))/n =
    // = (180n-180n+360)/n =
    // = 360/n
    turtle_turn_right(angle);
  }

  // Save the image when done
  turtle_save_png("mylogo.png");

  // Perform cleanup
  turtle_cleanup();
  
  // Terminate execution
  return 0;
}

// This function prints short How to use menu
void help(void) {
  // Help function
  puts("This program prints a polygon image produced by a turtle.");
  puts("The output is stored in mylogo.png/");
  puts("Usage: <name of the executive> [number of sides]");
  puts("          ./myprog 6 Print a polygon with 6 sides.");
  puts("If the executable is called 'square', it prints a square.");
}


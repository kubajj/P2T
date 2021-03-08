#include "validate.h"

// Validate the input
double validate_input(int argc , char * argv[]) {
  // Check number of arguments
  if (2!=argc) {
    fputs("Too many inputs - just enter one double!", stderr );
    // Exit with error
    exit(1);
  }
  double val;
  // Read in the value
  int parsed = sscanf(argv[1], "%lf", &val );
  // Value not read in
  if (0== parsed) {
    fputs("Could not parse input as a double!", stderr);
    // Exit with error
    exit(1);
  }
  // Return read in value
  return val;
}


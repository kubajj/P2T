#include <stdio.h>
#include <string.h>
#include "printpgm.h"

// This is my solution to the first exercise of C lab 5 for course P2T 2021
// Jakub Jelinek

// State the signature of the functions
void fillIn(int h, int w, unsigned char array[h][w]);
void help(void);

// This program creates pgm images of grayscale
int main(int argc, char *argv[]) {
  // Initialize variables
  // Height of the image
  int h = 256;

  // Width of the image
  int w = 256;
  if (argc > 1) {
    if (strcmp(argv[1],"-h")==0) {
      help();
      return 0;
    } else { 
      if (argc == 3) {
        // Read in heaight and check it
        sscanf(argv[1], "%d", &h); 
        if (h > 256) h = 256;
        
        // Read in width and check it
        sscanf(argv[2], "%d", &w);
        if (w > 256) w = 256; 
      } else {
        puts("Invalid arguments.\n");
        
        // Call help function
        help();

        // Terminate with failure
        return 1;
      }
    }
  }
  
  // Initialise the array storing the image
  unsigned char gray[h][w];
  
  // Call function filling in the array
  fillIn(h,w,gray);

  // Call functions which creates the text and binary pgm images
  pgmToFileText(h,w,gray);
  pgmToFileBin(h,w,gray);

  // Terminate
  return 0;
}

// The following function fills in passed aray with gradient values
void fillIn(int h, int w, unsigned char array[h][w]) {
  // Initialize iterators
  int i;
  int j;

  // Loop through rows
  for (i=0; i < h; i++) {
    // Loop through columns
    for (j=0; j < w; j++) {
      // Calculate the value to be stored at index - making gradient
      if (i > j) {
        array[i][j] = i;
      } else {
        array[i][j] = j;
      }
    }
  }
}

// The following function prints the help menu
void help(void) {
  // Help function
  puts("This program prints a grayscale image of at most 256x256 pixels.");
  puts("The output format is pgm and can be redirected via >. Example:");
  puts("          ./myprog > myimg.pgm");
  puts("Usage: <name of the executive> [-h] [height width]");
  puts("          -h           Print this manual.");
  puts("          ./myprog 6 6 Print an image of size 6x6 pixels.");
  puts("Note: To use the dimensions height has to be first and width second. \
        \nAlso they have to be separated by a space and follow right after the name of executable.");
}

#include "printpgm.h"

// The following function prints the image to the standard output
void printOut(int h, int w, int array[h][w]) {
  // Print first line
  printf("P2 %d %d %d\n", w, h, 255);

  // Initialize iterators
  int i;
  int j;

  // Loop through rows
  for (i=0; i < h; i++) {
    // Loop through columns
    for (j=0; j < w; j++) {
      // Print the current element
      printf("%d ", array[i][j]);
    }
    // End row
    puts("");
  }  
}



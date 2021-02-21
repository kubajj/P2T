#include <stdio.h>

// This is my solution to the first exercise of C lab 3 for course P2T 2021
// Jakub Jelinek
int main(void) {
  // Initialize variables
  // Height of the image
  int h = 256;
  // Width of the image
  int w = 256;
  // Array storing the image
  int gray[h][w];
  // Integers for loops
  int i;
  int j;
  // Print first line
  printf("P2 %d %d %d\n", w, h, 255);
  // Loop through rows
  for (i=0; i < h; i++) {
    // Loop through columns
    for (j=0; j < w; j++) {
      // Calculate the value to be stored at index - making gradient
      if (i > j) {
        gray[i][j] = i;
      } else {
        gray[i][j] = j;
      }
      // Print the current element
      printf("%d ", gray[i][j]);
    }
    // End row
    puts("");
  }
  // Terminate
  return 0;
}

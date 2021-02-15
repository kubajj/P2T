#include <stdio.h>
// This is a solution for part B of the N Green Bottles question
int main() {
  int bottles = 0;
  // While loop waiting for a valid number of bottles <1;99>
  do {
    printf("How many bottles should be on the wall?\nPlease enter number between 1 and 99.\n");
    // Read in the value provided by user
    scanf("%d", &bottles);
    // Check if it is valid
    if (bottles < 1 || bottles > 99) {
      bottles = 0;
      printf("Invalid input.\nNumber of bottles should be between 1 and 99.\n");
    }
  } while (bottles == 0);
  // Modifier character used for plural of Bottle-s
  char m = 's';
  int i;
  // Loop through <bottles> falling down
  for (i = bottles; i > 0; i--) {
    m = (i > 1) ? 's' : '\0'; // modifier is used for plural of noun bottle if the number of bottles is still greater than one
    // Print first two verses and the falling verse
    printf("%d Green Bottle%c, sitting on the wall\n%d Green Bottle%c, sitting on the wall\n", i, m, i , m);
    printf("and if 1 Green Bottle should accidentally fall...\n");
    if (i==1) {
      // There was only one bottle => no left
      printf("...there’ll be no Green Bottles, sitting on the wall.\n");
    } else {
      // The following is a ternary if asking if there is only one bottle left to make Bottles singular
      m = (i>2) ? 's' : '\0';
      // Print end of verse
      printf("...there’ll be %d Green Bottle%c, sitting on the wall.\n",i-1, m);
    }
  }
  // Terminate
  return 0;
}

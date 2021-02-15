#include <stdio.h>
// This is a solution for part A of the N Green Bottles question
int main() {
  // Modifier character used for plural of Bottle-s
  char m = 's';
  int i;
  // Loop through 10 bottles falling down
  for (i = 10; i > 0; i--) {
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

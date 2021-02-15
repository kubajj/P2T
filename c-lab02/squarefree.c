#include <stdio.h>

// This program asks user for a number, then outputs whether given number is square free
// and the process repeats if user wants it
int main() {
  // Declare variables
  int number;
  int i;
  int sqfree;
  int end = 0;
  char answer;
  char buffer[100];
  // Loop until user says no
  while (end == 0) {
    // Ask for input
    printf("Please enter a number to be tested.\n");
    // Read in user input
    fgets(buffer, 100, stdin);
    sscanf(buffer, "%d",&number);
    i = 2;
    sqfree = 1;
    // Note: Perfect squares should be square free (according to the flow diagram)
    // Loop through number smaller then the square root of given number
    while(i*i < number) {
      // If the square of the current number divides given number, it is not square free
      if (number % (i*i) == 0) {
        sqfree = 0;
        printf("Not SquareFree\n");
        break;
      }
      // Increment iteration counter
      i++;
    }
    // If no divided given number, it is square free
    if (sqfree == 1) printf("Squarefree\n");
    // Ask for repetition
    printf("Another test? [Y/N]\n");
    // Wait for valid response, repeat possible answers if invalid
    while (1==1) {
      fgets(buffer, 100, stdin);
      sscanf(buffer, "%c",&answer);
      if (answer == 'Y' || answer == 'y') {
        break;
      } else if (answer == 'N' || answer == 'n') {
        end = 1;
        break;
      } else {
        printf("Please enter only Y - yes or N - no.\n");
        continue;
      }
    }
  }
  // Terminate
  return 0; 
}

#include <stdio.h>
#include <string.h>
#include <ctype.h>

// This is my solution to the second exercise of C Lab03 for course P2T 2021
// Jakub Jelinek
int main(void) {
  // Ask for user input
  puts("Please enter a text up to 100 characters long:");
  // As we want up to 100 characters, we need to add 1 to the size as fgets reads up to n-1 chars
  char buffer[101];
  // Read up to sizeof(buffer)-1 characters, if the input is incorrect (user presses Ctrl+D) set buffer to an empty string
  // to prevent unpredicatable behaviour
  if (fgets(buffer, sizeof(buffer), stdin) == NULL) buffer[0] = 0;
  // Try to find \n in the read string
  char *p = strchr(buffer, '\n');
  // If present, remove it
  if (p) *p = 0;
  // Initialise integer for the loop
  int i;
  // Initialise a flag
  int changed = 0;
  // Print number of entered characters
  printf("You have entered %d characters\n", (int)strlen(buffer));
  // Loop through characters
  for(i = 0; i < strlen(buffer); i++) {
     // If character is uppercase, make it lowercase
     if (isupper(buffer[i])) {
       buffer[i] = tolower(buffer[i]);
       // Set the changed flag to true - string was not all lowercase
       changed = 1;
     }
  }
  // If string was changed
  if (changed == 1) {
    // Print lowercase string
    printf("%s\n", buffer);
  } else {
    // String was already all lowercase
    puts("Your string was all lowercase.");
  }
  // Terminate
  return 0;
}

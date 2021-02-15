#include<stdio.h>

// This program is a very simple calculator
int main() {
  // Initialize variables
  double first_number;
  double second_number;
  // Ask for user input
  printf("Please enter the problem you want to be solved:\n");
  char read[100];
  // Read in user input
  fgets(read, 100, stdin);
  // Decide what operation should be done and perform it if possible
  if (sscanf(read,"%lf+%lf",&first_number,&second_number)==2) {
    printf("=%3.2lf\n", first_number+second_number);
  } else if (sscanf(read,"%lf-%lf",&first_number,&second_number)==2) {
    printf("=%3.2lf\n", first_number-second_number);
  } else if (sscanf(read,"%lf*%lf",&first_number,&second_number)==2) {
    printf("=%3.2lf\n", first_number*second_number);
  } else if (sscanf(read,"%lf/%lf",&first_number,&second_number)==2) {
    if (second_number == 0) {
      printf("Division by zero is not defined on the set of real number.\n\b");
    } else {
      printf("=%3.2lf\n", first_number/second_number);
    }
  }
  // Terminate
  return 0;
}

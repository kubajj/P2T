#include <stdio.h>

int factorial(int n) {
  int result = 1;
  while (n > 1) {
    result *= n;
    n--;
  }
  return result;
}

int rfactorial(int n) {
  if (n == 1) {
    return 1;
  } else {
    return n*rfactorial(n-1);
  }
}

int main(int argc, char *argv[]) {
  if (argc == 1) {
    puts("Please provide at least one number as an argument when executing this program.");
    return 1;
  }
  int i;
  int number;
  for (i = 1; i < argc; i++) {
    sscanf(argv[i], "%d", &number);
    int result = factorial(number);
    int resultr = rfactorial(number);
    printf("Result of iterative method of factorial(%d) is %d\nRecursive approach resulted in %d\n", number, result, resultr);
    if (result != resultr) puts("It doesn't work.");   
  } 
}

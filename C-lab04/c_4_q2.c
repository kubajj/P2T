#include <stdio.h>

// define methods and their return values
int factorial(int n);
int rfactorial(int n);

int main(int argc, char *argv[]) {
	// res1 is the iterative one, res2 is recursive, n is current argument
	int res1, res2, n;
	// loop through all the arguments
	for (int i = 1; i < argc; i++) {
		// cast argument from string to a number
		sscanf(argv[i], "%d", &n);
		// call iterative factorial to get first result
		res1 = factorial(n);
		// call recursive factorial to get second result
		res2 = rfactorial(n);
		// print results
		printf("Factorial of %d is %d and %d recursively.\n", n, res1, res2);
	}
	// print an additional comment
	printf("(Both results should always be the same.)\nEverything went fine!\n");
	return 0;
}

// define body of iterative method
int factorial(int n) {
	// initialize value
	int result = 1;
	// conditional for values that should return the same value n <= 1 return: 1
	if (!( n <= 1)) {
		// perform factorial multiplication
		for (int i = n; i > 0; i--) {
			result *= i;
		}
	}
	// return result
	return result;
}

// define body of the recursive method
int rfactorial(int n) {
	// base case
	if (n <= 1) {
		return 1;
	} else {
		// recursive call
		return n*rfactorial(n-1);
	}
}

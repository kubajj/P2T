#include <stdio.h>

int main (void) {
	double op1, op2; // define variables for operands
	char operation;  // define variable for the operator character
	printf ("Enter your expression: \n"); // ask user for input
	scanf("%lf %c %lf", &op1, &operation, &op2); // get the input from user
	switch ( operation ) { // decide what to do based on the operation given by user
		case '+' : // addition
			printf("=%f\n",op1 + op2);
			break ;
		case '-' : // subtraction
			printf("=%f\n",op1 - op2);
			break;
		case '*' : // multiplication
			printf("=%f\n",op1 * op2);
			break;
		case '/' : // division
			printf("=%f\n",op1 / op2);
			break;
		default: // the operation given was not valid
			printf("Something went wrong\n");
			break;
	}
	return 0; // end the program
}


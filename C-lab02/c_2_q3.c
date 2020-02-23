#include <stdio.h>
#include <stdbool.h> // to use booleans

// Squarefree numbers

int main (void) {
	// define all variables and initialize run
	int number;
	char answer;
	bool run = true;
	bool run_inner; // run inner loop
	bool squarefree; // result
	while (run == true) {
		run_inner = true;
		printf ("Enter a number: \n");
		scanf("%d", &number);
		
		squarefree = true; // initialize the result to be true, until we find out that it is false
		for (int i = 2; i*i <= number; i++) { // try every integer <= sqrt(number) if they divide number, everything bigger does not make sense to test
			if (number % (i*i) == 0) {
				squarefree = false;
				break;
			}
		}
		printf("%s\n",squarefree ? "Squarefree" : "Not Squarefree"); // print the result of the function
			
		while (run_inner == true) {
			printf ("Another test? [Y/N]\n"); // ask for user input
	        scanf(" %c", &answer); // extract users answer
			switch ( answer ) {
				case 'Y' : // evaluate response
					run_inner = false;
					break ;
				case 'N' :
					run_inner = false;
					run = false;
					break;
				case 'y' : // add lower case 
                        run_inner = false;
                        break ;
                case 'n' :
                        run_inner = false;
                        run = false;
                        break;
				default:
					printf("Please enter either 'Y' or 'N'!\n");
					break;
			}
		}			
	}
	return 0; // end
}


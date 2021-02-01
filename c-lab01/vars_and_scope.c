#include <stdio.h> // Bug : required for printf
int k = 4;
// k is an integer, k is in scope during the whole execution, it is allocated before entering main function
// k is later shadowed, but still allocated
int main(void) {
	printf("The value of k is %d and its type is integer.\n", k); // printf statements cannot be outside
	// of method, therefore it has to be here
	int i = 50; // i is in main scope, it is an integer, it is allocated in the main method
	printf("The value of i is %d and i is integer\n", i);
	unsigned int j = i * 2; // j is in main scope, it is an unsigned integer, it is allocated in the main method
	printf("The value of j is %d and j is an unsigned integer\n", j);
	double k = 1.0; // Bug : missing ;
	// k shadows variable k from the file scope here
	// new k is a double, it is in main scope and it is allocated in the main method
	printf("The value of k is %f and k is double\n", k);
	{
	// I am going to refer to this block as "inner block"
		float i = 5.0; // i shadows variable i from main scope
		// new i is a float, it is in inner block scope and it is alloacated in the inner block
		printf("The value of i is %f and i is float\n", i);
		printf("The value of i is %3f\n", i); // The value of i is 5.000000
		// In previous print, I thought that the number should be 5.0, but the 3 stands
		// for the minimum number of characters rather than maximum.
		// It just uses the default precision - 6.
		k = i * j; // k is the "new" double k from main scope, it is in main scope
		// and was allocated in main method
		printf("The value of k is %3f and k is double\n", k);
		i *= 6; // i is the "new" float i from inner block scope, it is in inner block scope
		// and was allocated in inner block
		printf("The value of i is %f and i is float\n", i);
	}
	// Bug : j is already assigned double j;
	// I am not going to comment on double j as it is not used anywhere in the code
	i = k + i; //or i += k
	// i is the integer i from main scope, it was allocated in the beginning of the main function
	printf("Now , the value of i is %d\n", i); // Now , the value of i is 550
	return 0;
} 

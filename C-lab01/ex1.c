#include <stdio.h> //this has to be always here
int k = 4;
int main ( void ) {
	int i = 50; // i in main scope
	printf("The value of i is %d and i is integer\n", i);
	unsigned int j = i * 2; //j in main scope
        printf("The value of j is %d and j is unsigned integer\n", j);
	double k = 1.0; // we have to end each line with semicolon
        // k in	main scope
        printf("The value of k is %f and k is double\n", k);
	{
		float i = 5.0; // i in inner block scope
	        printf("The value of i is %f and i is float\n", i);

		printf ("The value of i is %3f\n", i);
		k = i * j; // modyfying k from main scope
                printf("The value of k is %3f and k is double\n", k);
		i *= 6; // i in block scope
                printf("The value of i is %f and i is float\n", i);
	}
	double l; //j;-> l; -  j was already taken
	i = k + i; // or i += k
	// i in main scope
        printf("The value of i is %d and i is integer\n", i);
	printf ("Now, the value of i is %d\n", i);
	return 0;
}

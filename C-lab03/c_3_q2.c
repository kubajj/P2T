#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

int main() {
	// ask for user input
	printf("Please enter a string of up to 100 characters:\n");
	// define string variable to store the input
	char input[100];	
	// read user input
	fgets(input, sizeof(input), stdin);
	// print the lenght of the string
	printf("The length of your input is:\n%ld\n", strlen(input));
	// initialize a boolean variable to see, whether there is any uppercase character
	bool changed = false;	
	// go through the string array and change every uppercase character to lowercase -> input is now lowercase
	for (int i = 0; i < strlen(input); i++) {
		if (isupper(input[i])) {
			input[i] = tolower(input[i]);
			// change the changed boolean variable value if at least one of the characters in input is uppercase
			changed = true;
		}
	}
	// decide what is the output
	if (changed) {
		printf("Your new string is:\n%s\n", input);
	} else {
		printf("Your string was all lowercase...\n");
	}
	// terminate
	return 0;
}

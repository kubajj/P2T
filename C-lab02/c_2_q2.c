#include <stdio.h>

int main (void) {
	int bottles = -1; // initialize the number of bottles with a number that is not valid
	do { // get the number of bottles from the user and make sure that it is valid
		printf ("How many bottles should be on the wall?\n");
		scanf("%d", &bottles);
		if (bottles < 1 || bottles > 99) {
			bottles = -1;
			printf("This is not an appropriate input.\nPlease select a number between 1 and 99.\n");	
		}
	} while (bottles < 0);
	char m; // define variable m, m stands for modifier
	for (int i = bottles; i > 0; i--) {
		m = (i > 1) ? 's' : '\0'; // modifier is used for plural of noun bottle if the number of bottles is still greater than one
		printf("%d Green Bottle%c, sitting on the wall\n%d Green Bottle%c, sitting on the wall\n", i, m, i , m);
		// ^ print the first verses
		// v print the climax verse
		printf("and if 1 Green Bottle should accidentally fall...\n");
		// print the last verse
		if (i == 1) {
			printf("...there’ll be no Green Bottles, sitting on the wall.\n");
		}
		else {
			m = (i > 2) ? 's' : '\0';
			printf("...there’ll be %d Green Bottle%c, sitting on the wall.\n",i-1, m);
		}
	}	

	return 0; // end
}

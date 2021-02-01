#include <stdio.h>
const int c = 42;
int main(void) {
	int other_int = 5;
	float some_float = 2.54;
	int i = other_int + c;
	printf("%d + %d = %3d\n",other_int,c,i);
	int j =	other_int - c;
	printf("%d - %d = %3d\n",other_int,c,j);
	float k = c * some_float;
        printf("%d * %3.2f = %3.2f\n",c,some_float,k);
	float l = c / some_float;
        printf("%d / %3.2f = %3.2f\n",c,some_float,l);
	int m = c % other_int;
	printf("%d %% %d = %3d\n",c,other_int,m);
}

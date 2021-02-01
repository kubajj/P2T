#include <stdio.h>
const int c = 42;
int main(void) {
	int i = 10 + c;
	printf("10 + %d = %d\n",c,i);
	int j =	10 - c;
	printf("10 - %d = %d\n",c,j);
	float k = c * 2.54;
        printf("%d * 2.54 = %3.2f\n",c,k);
	float l = c / 2.54;
        printf("%d / 2.54 = %3.2f\n",c,l);
	int m = c % 4;
	printf("%d % 4 = %d\n",c,m); 
}

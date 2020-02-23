#include <stdio.h>

int main(void) {
	int i,*myPtr , **myPtrPtr;
	int a[2] = {1,2};

	i = 6;
	myPtr = &i;
	myPtrPtr=&myPtr;
	{
		int i = 7;
		*myPtr = 45;
		// the printf statements below print following things:
		// the first one shows us that the value at address where is i in the main scope is no more 6, but was changed to 45
		// the second one shows us that i in this block is not the i from the outer block (to which myPtr points), so we can change it in any manner that we want
		printf("The value %d is stored in location %p\n", *myPtr ,myPtr);
		printf("The value %d is stored in location %p\n", i, &i);
	}
	// MyPtrPtr contains address of the pointer to myPtr
	// printf("The value %p is stored in the location %p\n", *myPtrPtr , myPtrPtr);
	// we have to change *myPtrPtr to **myPtrPtr and also the first %p has to be changed to %d
        // like this:
	// printf("The value %d is stored in the location %p\n", **myPtrPtr, myPtrPtr);
	// but that does not make sense, so we can change the text a little bit
	printf("The pointer to value %d is stored in the location %p\n", **myPtrPtr, myPtrPtr);
	printf("The value %d is stored in location %p\n", i, &i);

	// my observations are described below the following statement
	printf("%p %p %d %d %d\n", a, &a, *a, a[0], a[1]);
	// a is just a pointer to the first element of the array
	// &a is then the same as a
	// *a is the value at a, so it is the value of the first element
	// a[0] is the value of the first element, which is the same as *a
	// a[1] is the value of the second element
	
	// from playing around with the statements, I discovered that &a[1] = a + 4
	// which means that it is 4 bytes -> 64 bits "further" in memory, which is right because it is array of integers
	// printf("%p %p", a, &a[1]);
	
	return 0;
}

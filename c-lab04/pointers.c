#include <stdio.h>

int main(void) {
  int i,*myPtr , **myPtrPtr;
//  int a[4] = {1,2, 3, 4};
  int a[2] = {1,2};
  i = 6;
  myPtr = &i;
  myPtrPtr=&myPtr;
  {
    int i = 7;
    *myPtr = 45;
    // The following printf statement prints the value of main scope i = 45 (modified in the line above)
    // and then prints the address where main scope i is stored
    printf("The value %d is stored in location %p\n", *myPtr, myPtr);
    // The following printf statement prints the value of block scope i = 7 (declared at the top of block)
    // and then prints the address where block scope i is stored at
    printf("The value %d is stored in location %p\n", i, &i );
    // We can see that the two addresses are different
  }
  // myPtrPtr contains a pointer to myPtr, so it stores the address of myPtr, which is a pointer to i
// printf("The value %p is stored in the location %p\n", *myPtrPtr, myPtrPtr);
  // To make the printf statement above print the value of i, we need to modify the first format specifier
  // from %p to %d and then and * in front of *myPtrPtr, as follows
  printf("The value %d is stored in the location %p\n", **myPtrPtr, myPtrPtr);
  printf("The value %d is stored in location %p\n", i, &i);
  
  // From the following printf statement, we can see that a is just a pointer to the array, so it is the
  // same as &a
  // We can also see that the difference between addresses of &a and &a[1] is 4 on brutha, because that
  // is the size of an integer there, because &a is pointing to a[0], which can be read from
  // that *a and a[0] is the same value
  printf("%p %p %p %d %d %d\n", a, &a, &a[1], *a, a[0], a[1]);
  // From this printf statement, we discovered that sizeof(a) is actually the number of elements * size of int
  printf("%zu %zu %zu %zu %zu\n", sizeof(a), sizeof(&a), sizeof(*a), sizeof(a[0]), sizeof(a[1]));
  return 0;
}

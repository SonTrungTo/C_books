// Example 11.11: Illustrating the use of pointers to array.
// arraySum calculates the sum of the elements.
// This handles the program more intelligently, succinctly and efficiently.
#include <stdio.h>

int arraySum(int array[], int n) {
  int         sum = 0, *ptr;         // *ptr is for optimization purpose.
  int * const endArray = array + n; // This is for optimization

  for (ptr = array; ptr < endArray; ptr++)
    sum += *ptr;

  return sum;
}

int main(void) {
  int     arraySum(int array[], int n);
  int     array[10] = {3,7,-9,3,6,-1,7,9,1,-5};

  printf("The sum is %i.\n", arraySum(array,10));

  return 0;
}

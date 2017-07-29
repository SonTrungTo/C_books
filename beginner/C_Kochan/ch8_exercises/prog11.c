// arraySum takes 2 args and returns the sum of elements in the array.
#include <stdio.h>

int main(void) {
  int     i;
  int     arraySum(int array[], int numberOfElements);
  int     set[121];

  // Initialize the array.
  for (i = 0; i <= 120; i++)
    set[i] = i;

  printf("The sum of the array 'set' is %i\n", arraySum(set, 121));

  return 0;
}

int       arraySum(int array[], int numberOfElements) {
  int     sum = 0, i;

  for (i = 0; i < numberOfElements; i++)
    sum += array[i];

  return  sum;
}

// Displaying Multiples Values
#include <stdio.h> // Declare to the compiler info about the printf output routine.

int main(void) {
  int value1,value2,sum;

  // Allocate the var to the memory and output when necessary.
  value1=50;
  value2=75;
  sum=value1+value2;
  printf("The sum of %i and %i is %i\n", value1, value2, sum);

  return 0;
}

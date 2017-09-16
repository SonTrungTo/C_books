/**
*   Example 11.9: Using pointers and functions to exchange values.
*/
#include <stdio.h>

void exchange(int * const pint1, int * const pint2) {
  int temp;

  temp   = *pint1;
  *pint1 = *pint2;
  *pint2 = temp;
}

int main(void) {
  void exchange(int * const pint1, int * const pint2);
  int  i1 = -5, i2 = 66, *p1 = &i1, *p2 = &i2;

  printf("i1 = %i,  i2 = %i\n", i1, i2);
  exchange(p1,p2);
  printf("i1 = %i,  i2 = %i\n", i1, i2);

  exchange(&i1,&i2);
  printf("i1 = %i,  i2 = %i\n", i1, i2);

  return 0;
}

// int main(void) {
//   int i1 = -5, i2 = 66, temp;
//
//   printf("i1 = %i, i2 = %i\n", i1, i2);
//   temp = i1;
//   i1 = i2;
//   i2 = temp;
//   printf("i1 = %i, i2 = %i\n", i1, i2);
//   ....
//
//   return 0;
// }
/**
*  Without pointers, the exchange function cannot be written, AND AS HAVE SEEN,
* the exchange of i1 and i2 is extremely error-prone, brittle and dangerously stupid!
*/

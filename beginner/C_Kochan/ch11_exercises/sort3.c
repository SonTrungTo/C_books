// Exercise 8: sort3 sorts 3 integers into ascending order.
#include <stdio.h>

void exchangeValue(int * const pint1, int * const pint2) {
  int temp;

  temp   = *pint1;
  *pint1 = *pint2;
  *pint2 = temp;
}

void sort3(int * const pint1, int * const pint2, int * const pint3) {
  void exchangeValue(int * const pint1, int * const pint2);

  if (*pint1 > *pint2)
    exchangeValue(pint1,pint2);
  if (*pint1 > *pint3)
    exchangeValue(pint1,pint3);
  if (*pint2 > *pint3)
    exchangeValue(pint2,pint3);
}

int main(void) {
  int i1 = 33, i2 = -5, i3 = -194, *p1 = &i1, *p2 = &i2, *p3 = &i3;
  void sort3(int * const pint1, int * const pint2, int * const pint3);

  printf("i1 = %i  i2 = %i  i3 = %i\n", *p1, *p2, *p3);

  sort3(p1,p2,p3);
  printf("i1 = %i  i2 = %i  i3 = %i\n", *p1, *p2, *p3);

  return 0;
}

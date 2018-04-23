#include "add.h"

void swap(int *pint1, int *pint2) {
  int temp;

  temp    =   *pint1;
  *pint1  =   *pint2;
  *pint2  =   temp;
}

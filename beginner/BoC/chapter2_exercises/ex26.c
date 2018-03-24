/*************************************************************************
* Testing expressions that are machine-dependent: ++a + a++ and a += ++a *
* The results are total rubbish                                          *
**************************************************************************/
#include <stdio.h>

#define   NTIMES    5

int main(void) {
  int    a = 0, i;

  printf("%6s%16s%16s\n", "a", "++a + a++", "a += ++a");
  for (i = 1; i <= NTIMES; i++) {
    printf("%6i%13i%15i\n", a, ++a + a++, a += ++a);
  }

  return 0;
}

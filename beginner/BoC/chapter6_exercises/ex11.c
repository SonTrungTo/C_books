#include <stdio.h>

int main(void) {
  int   a[] = {0, 2, 4, 6, 8},
       *p = a + 3;

  printf("%s%d\n%s%d\n",
"a[3] = ", *p,
"a[4] = ", *(p + 1) );

  return 0;
}

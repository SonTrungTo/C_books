#include <stdio.h>

void change_it(int []);

int main(void) {
  int   a[5], *p;
  p = a;
  printf("p has the value %p\n", p);
  change_it(a); // a is constant pointer (i.e, int * const a = &a[0]).
  p = a;
  printf("p has the value %p\n", p);

  return 0;
}

void change_it(int a[]) {
  int  i = 777, *q = &i;
  a = q; /* a is assigned a different value */
}

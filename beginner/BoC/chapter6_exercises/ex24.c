#include <stdio.h>

void f(int a[]);

int main(void) {
  char    s[] = "deep in the heart of texas";
  char    *p  = "deep in the heart of texas";
  int     a[3];
  double  d[5];

  printf("%s%lu\n%s%lu\n%s%lu\n%s%lu\n",
"sizeof(s) = ", sizeof(s),
"sizeof(p) = ", sizeof(p),
"sizeof(a) = ", sizeof(a),
"sizeof(d) = ", sizeof(d) );
f(a);

  return 0;
}

void f(int a[]) {
  printf("In f(): sizeof(a) = %lu\n", sizeof(a));
}

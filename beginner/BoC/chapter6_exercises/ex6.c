#include <stdio.h>

int main(void) {
  int    a, b, c;

  printf("%s%lu\n%s%lu\n%s%lu\n",
"&a = ", (unsigned long) &a,
"&b = ", (unsigned long) &b,
"&c = ", (unsigned long) &c);
  return 0;
}
// pointer is 8 bytes while int is 4 bytes, => %d is not appropriate => use %lu instead.

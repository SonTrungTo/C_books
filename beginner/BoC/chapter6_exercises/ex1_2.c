#include <stdio.h>

int main(void) {
  char *format = "%d %d %d %d %d\n";
  int   i  =  3;
  int   *p =  &i;

  printf(format, p, p - 2, *p + 7, 3 * **&p + 1, 5 * (p - (p - 2))); //ptrdiff_t can be very big (long)!

  return 0;
}

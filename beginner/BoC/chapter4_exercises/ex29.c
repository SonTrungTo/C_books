/* Rewrite the codes. */
#include <stdio.h>

int main(void) {
  int   total = 0, cnt = 0, digit_cnt = 0, i, n, c;

  while ( (c = getchar()) != 'E' ) {
    ++cnt;
    if (c >= '0' && c <= '9')
      ++digit_cnt;
  }

  i = -5;
  n = 50;
  while (i < n) {
    ++i;
    if (i == 0)
      ++i;
    total += i;
    printf("i = %d and total = %d\n", i, total);
  }

  return 0;
}

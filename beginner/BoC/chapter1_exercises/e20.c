// printf printing number of successful conversions
#include <stdio.h>

int main(void) {
  int    cnt;

  cnt   = printf("abc\0abc\0");
  printf("\nNo. of characters printed: %d\n", cnt);

  return 0;
}

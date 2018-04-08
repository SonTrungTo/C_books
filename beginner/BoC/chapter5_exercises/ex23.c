/* hailstones sequence finite ???? */
#include <stdio.h>

void hailstones(int);
void prn_result(void);

int main(void) {
  prn_result();
  return 0;
}

void hailstones(int n) {
  int i;

  for (i = 0; n > 0; i++) {
    if (i % 6 == 0)
      putchar('\n');

    printf("%10d", n);
    if (n % 2 == 0 || n == 1)
      n /= 2;
    else
      n = 3*n + 1;
  }

  printf("\n\nNumber of hailstones generated: %d\n\n", i);
}

void prn_result(void) {
  int    n;

  printf("Enter the first number in the sequence:   ");
  while (scanf("%d", &n) == 1)
    hailstones(n);

  printf("OK! - bye.\n");
}

/* A simple program simulating coin-tossing program */
#include <stdio.h>
#include <stdlib.h>

void prn_result(void);
void coin_tossing(int);

int main(void) {
  prn_result();
  return 0;
}

void coin_tossing(int n) {
  int  c, i, h = 0;                  /* head = 1, tails = 0 */

  for (i = 0; i < n; i++) {
    if (i % 50 == 0)
      putchar('\n');

    c = lrand48() % 2;
    printf("%d", c);
    if (c == 1)
      ++h;
  }
  printf("\n\nP(H = 1) = %lf\n\n", (double) h / i );
}

void prn_result(void) {
  int n;

  printf("Input the number of tosses:   ");
  while (scanf("%d", &n) == 1)
    coin_tossing(n);

  printf("\n\nSimulation completed! Bye!\n\n");
}

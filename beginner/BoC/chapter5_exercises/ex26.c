/* Monte Carlo simulation -- P (at least two person have the same birthday same month) */
#include <stdio.h>
#include <stdlib.h>

void  prn_number(void);
void  simulation(int, int);

int main(void) {
  prn_number();
  return 0;
}

void simulation(int n, int trials) {
  int     month[12], i, event = 0, birthday, j;

  for (i = 0; i < trials; i++) {
    for (j = 0; j < 12; j++)
      month[j] = 0;

    for (j = 0; j < n; j++) {
      birthday = lrand48() % 12 + 1;
      ++month[birthday - 1];
    }

    for (j = 0; j < 12; j++)
      if (month[j] >= 2) {
        ++event;
        break;
      }
  }

  printf("P(at least two same month) = %lf\n\n", (double) event / trials);
}

void prn_number(void) {
  int   n, t;

  printf("Enter the number of people in the room and the number of trials!\n");
  printf("Press 'q' to quit the simulation.\n\n");
  while (scanf("%d%d", &n, &t) == 2)
    simulation(n,t);

  printf("Bye!\n\n");
}

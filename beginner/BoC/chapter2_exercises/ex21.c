/*
*   Modify rand() to srand() to "seed the random-number generator".
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
  int   i = -1, n;

  srand(time(NULL));
  printf("\n%s\n%s",
         "Some randonly distributed integers will be printed.",
         "How many do you want to see?   ");
  scanf("%i", &n);
  while (++i < n) {
    if (i % 5 == 0) {
      putchar('\n');
    }
    printf("%-11i", rand());
  }

  printf("\n");
  return 0;
}

/*
*   Change rand() to rand48() in general.
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
  int   i = -1, n;

  srand48(time(NULL));
  printf("\n%s\n%s",
         "Some randonly distributed integers will be printed.",
         "How many do you want to see?   ");
  scanf("%i", &n);
  while (++i < n) {
    if (i % 5 == 0) {
      putchar('\n');
    }
    printf("%-11ld", lrand48());
  }

  printf("\n");
  return 0;
}

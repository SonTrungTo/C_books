// Print some integers on the screen using rand().
#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int   i, n;

  printf("\n%s\n%s",
    "Some randomly distributed integers will be printed.",
    "How many do you want to see?  ");
  scanf("%i", &n);
  for (i = 0; i < n; i++) {
    if (i % 10 == 0)
      putchar('\n');
    printf("%-11i", rand());
  }

  printf("\n\n");
  return 0;
}

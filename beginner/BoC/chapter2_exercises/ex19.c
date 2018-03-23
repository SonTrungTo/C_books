/*  Print some integers on the screen using rand().
*   Replacing for with while loop and comparing i++ and ++i
*/
#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int   i = -1, n;

  printf("\n%s\n%s",
    "Some randomly distributed integers will be printed.",
    "How many do you want to see?  ");
  scanf("%i", &n);
  while (++i < n) {
    if (i % 5 == 0)
      putchar('\n');
    printf("%-11i", rand());
  }

  printf("\n\n");
  return 0;
}

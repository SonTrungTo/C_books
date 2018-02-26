// Count total number of letters
#include <ctype.h>
#include <stdio.h>

int main(void) {
  int     i, sum = 0;
  char    c;

  for (i = 0; (c = getchar()) != EOF; i++) {
    if ( isalpha(c) )
      sum += 1;
  }

  printf("Number of letters:  %5d\n", sum);

  return 0;
}

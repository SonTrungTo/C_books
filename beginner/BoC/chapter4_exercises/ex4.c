/* Count the number of times the first three letters of the alphabet appear */
#include <stdio.h>

int main(void) {
  int    c, alpha_count = 0;

  while ( (c = getchar()) != EOF) {
    if ( c >= 'a' && c <= 'c' || c >= 'A' && c <= 'C')
      ++alpha_count;
  }

  printf("The file contains %d first-three-letter letters of the alphabet.\n", alpha_count);

  return 0;
}

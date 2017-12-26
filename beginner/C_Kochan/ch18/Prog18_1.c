// Example 18.1: Adding DEBUG statements with the Preprocessor
#include <stdio.h>
#define DEBUG

int process(int i, int j, int k) {
  return i + j + k;
}

int main(void) {
  int process(int i, int j, int k);
  int i, j, k, nread;

  nread = scanf("%i %i %i", &i, &j, &k);

  #ifdef DEBUG
    fprintf(stderr, "Number of integers read = %i\n", nread);
    fprintf(stderr, "i = %i, j = %i, k = %i\n", i, j, k);
  #endif

  printf("%i\n", process(i,j,k));

  return 0;
}

/* A table of the first 10 factorials */
#include <stdio.h>

int main(void) {
  int n, factorial = 1;

  printf("A table of the first 10 factorials\n\n");
  printf("    n               n_th factorial\n");
  printf("-----------       ------------------\n");

  for (n = 1; n <= 10; n++) {
    factorial *= n;
    printf("   %2i                    %i\n", n, factorial);
  }

  return 0;
}

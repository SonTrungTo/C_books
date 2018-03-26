/* Compute the size of some fundamental types. */
#include <stdio.h>

int main(void) {
  printf("The size of some fundamental types is computed.\n\n");
  printf("       char:%3lu byte \n", sizeof(char));
  printf("      short:%3lu bytes\n", sizeof(short));
  printf("        int:%3lu bytes\n", sizeof(int));
  printf("       long:%3lu bytes\n", sizeof(long));
  printf("   unsigned:%3lu bytes\n", sizeof(unsigned));
  printf("      float:%3lu bytes\n", sizeof(float));
  printf("     double:%3lu bytes\n", sizeof(double));
  printf("long double:%3lu bytes\n", sizeof(long double));

  return 0;
}

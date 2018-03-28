/* Find eps on this machine */
#include <stdio.h>
#include <float.h>

int main(void) {
  double    eps = 1;

  while ( 1.0 < 1.0 + (eps / 2) ) {
    eps /= 2;
  }

  printf("The value of eps is: %.15e\n", eps);
  printf("The value of DBL_EPSILON is %.15e\n", DBL_EPSILON);

  return 0;
}

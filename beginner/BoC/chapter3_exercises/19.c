/* e^{pi} ? pi^{e} */
#include <stdio.h>
#include <math.h>

int main(void) {
  if (pow(M_PI,exp(1)) > exp(M_PI))
    printf("pi^{e} is larger than e^{pi}.\n");
  else
    printf("e^{pi} is larger than pi^{e}.\n");

  return 0;
}

/* The first if is the correct one! If x != 0, then the equation is not true.
*/
#include <stdio.h>

int main(void) {
  double     z = 1.8, x = 0;

  if ( ((z - x) / x * x < 2.0) && (x != 0.0)) {
    printf("This is wrong!\n");
  }

  return 0;
}

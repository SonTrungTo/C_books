/* Not all real numbers are machine-representable */
#include <stdio.h>

int main(void) {
  double  x = 123.45123451234512345;
  double  y = 123.45123451234500000;

  printf("%.17f\n%.17f\n", x, y);

  return 0;
}

/*
* y needs to end up with at least 4 zeros for the number to be different.
* Explaination: 14 digits on the right plus 1 for the left makes 15 siginifican figures.
* Since the format is double, only 15 siginificant figures are accounted for! Moreoever,
* note that since the machine language is binary, the "graininess" affects the result.
*/

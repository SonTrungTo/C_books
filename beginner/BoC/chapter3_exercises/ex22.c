/* ANSI C does not necessarily converse float to double, unlike C traditional
 */
#include <stdio.h>

int main(void) {
  float  x = 1.0, y = 2.0;

  printf("%s%lu\n%s%lu\n%s%lu\n",
      "sizeof(float)  = ", sizeof(float),
      "sizeof(double) = ", sizeof(double),
      "sizeof(x + y)  = ", sizeof(x + y));

  return 0;
}

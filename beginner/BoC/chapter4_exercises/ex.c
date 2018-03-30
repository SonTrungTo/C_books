/* Exercise 1:  a <= b
                a > b || c > d
                a + 1 != b + 1
                a >= 1 && (b >= 2 || c >= 3)
*/
#include <stdio.h>

int main(void) {
  int   a = 0, b = 2, c = 23, d = -4;

  if (!(a > b) != (a <= b))
    printf("Q1 wrong!\n");
  else if (!(a <= b && c <= d) != (a > b || c > d))
    printf("Q2 wrong!\n");
  else if (!(a + 1 == b + 1) != (a + 1 != b + 1))
    printf("Q3 wrong!\n");
  else if ( !(a < 1 || b < 2 && c < 3) != (a >= 1 && (b >= 2 || c >= 3)) )
    printf("Q4 wrong!\n");
  else
    printf("All are correct!\n");

  return 0;
}

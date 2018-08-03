#include <stdio.h>
#include <limits.h>
#include <float.h>

int main(void) {
  printf("The range of char is from %d to %d\n", CHAR_MIN, CHAR_MAX);
  printf("The range of signed char is from %d to %d\n", SCHAR_MIN, SCHAR_MAX);
  printf("The range of unsigned char is from %d to %d\n", 0, UCHAR_MAX);

  return 0;
}

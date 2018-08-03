#include <stdio.h>
#include <limits.h>
#include <float.h>

int main(void) {
  printf("The range of char is from %d to %d\n", CHAR_MIN, CHAR_MAX);
  printf("The range of signed char is from %d to %d\n", SCHAR_MIN, SCHAR_MAX);
  printf("The range of unsigned char is from %d to %d\n", 0, UCHAR_MAX);
  printf("min(unsigned short) = %d, max(unsigned short) = %d\n", 0, USHRT_MAX);
  printf("min(signed short) = %d, max(signed short) = %d\n", SHRT_MIN, SHRT_MAX);
  printf("min(int) = %d, max(int) = %d\n", INT_MIN, INT_MAX);
  printf("min(uint) = %d, max(uint) = %u\n", 0, UINT_MAX);
  printf("min(long) = %ld, max(long) = %ld\n", LONG_MIN, LONG_MAX);
  printf("min(ulong) = %d, max(ulong) = %lu\n", 0, ULONG_MAX);
  printf("min(float) = %f, max(float) = %f\n", FLT_MIN, FLT_MAX);
  printf("min(double) = %lf, max(double) = %lf\n", DBL_MIN, DBL_MAX);

  return 0;
}

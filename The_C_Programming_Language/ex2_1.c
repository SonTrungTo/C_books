#include <stdio.h>
#include <limits.h>
#include <float.h>

int main(void) {
  /* By printing appropriate values from headers */
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
  /* By direct computation */
  printf("SCHAR_MIN = %d, SCHAR_MAX = %d\n", -(char)((unsigned char) ~0 >> 1),
(char)((unsigned char) ~0 >> 1));
  printf("UCHAR_MIN = 0 ,UCHAR_MAX = %d\n", (unsigned char) ~0);
  printf("SHRT_MIN = %d, SHRT_MAX = %d\n", -(short)((unsigned short) ~0 >> 1),
(short)((unsigned short) ~0 >> 1));
  printf("USHORT_MIN = 0, USHORT_MAX = %d\n", (unsigned short) ~0);
  printf("INT_MIN = %d, INT_MAX = %d\n", -(int)((unsigned int) ~0 >> 1),
(int)((unsigned int) ~0 >> 1));
/* etc... */

  return 0;
}

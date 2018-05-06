#include "include.h"

char unpack(int a, int k) {   /* k = 0, 1, 2, 3 */
  int       n = k * CHAR_BIT;
  unsigned  mask = 255;

  mask <<= n;
  return ((a & mask) >> n);
}

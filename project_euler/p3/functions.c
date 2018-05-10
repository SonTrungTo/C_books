#include "p3.h"

int is_even(long x) {
  if (x % 2 == 0)
    return 1;
  else
    return 0;
}

int is_prime(long x) {
  int i;

  if (x % 2 == 0 && x != 2)
    return 0;

  for (i = 3; i < x && x != 2; i += 2)
    if (x % i == 0)
      return 0;

  return 1;
}

long maximum(long x, long y) {
  if (x >= y)
    return x;
  else
    return y;
}

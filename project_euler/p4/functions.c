#include "p4.h"

int reverse_number(int p) {
  int   result = 0;
  int   digits[N];
  int   power = -1;
  int   i, size;

  while (p) {
    ++power;
    digits[power] = p % 10;
    p /= 10;
  }

  size = power + 1;

  for (i = 0; i < size; i++) {
    result += digits[i] * (int) pow(10, (int) power);
    --power;
  }

  return result;
}

/*---------------------------------------------------*/

int is_palindrome(int p) {
  if (reverse_number(p) == p)
    return 1;
  else
    return 0;
}

/*----------------------------------------------------*/

int maximum(int a, int b) {
  if (a >= b)
    return a;
  else
    return b;
}

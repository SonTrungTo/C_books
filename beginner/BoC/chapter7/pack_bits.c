#include "include.h"

int pack_bits(char a, char b, char c, char d) {
  int    p = a;

  p = p << CHAR_BIT | b;
  p = p << CHAR_BIT | c;
  p = p << CHAR_BIT | d;

  return p;
}

/* Print out a list of powers of 2 in decimal, hexadecimal and octal */
#include <stdio.h>

int main(void) {
  int   i, val = 1;

  for (i = 1; i < 35; i++) {
    printf("%15d%15u%15x%15o\n", val, val, val, val);
    val *= 2;
  }
  return 0;
}
/*
* If we have 2^n in decimal, then hexadecimal = H(n mod 4) * 10^{[n / 4]}
*                                 octal       = O(n mod 3) * 10^{[n / 3]}
*                                 H(n mod 4) ::= 1|2|4|8
*                                 O(n mod 3) ::= 1|2|4
*                                 [n / k]    ::= integer division of n and k
*/

/*
*   Purpose: How important white space around operator is.
*   Rule: Compiler groups the longest string as token first.
*   e.g, a+++b == a++ + b
*
*   This is a program to test this conclusion.
*   Author: Son To.
*/
#include <stdio.h>

int main(void) {
  int    a = 0, b = 1;

  printf("a+++b = %i\n", a+++b); /* == 1, a == 1, b == 1 */
  printf("a + ++b = %i\n", a + ++ b); /* == 3, a == 1, b == 2  */

  return 0;
}

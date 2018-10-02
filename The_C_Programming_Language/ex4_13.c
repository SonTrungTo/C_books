#include <stdio.h>
#include <string.h>

#define     MAXSIZE     100

void   reverse(char []);

void reverse(char s[]) {
  static int    i, len;

  len = strlen(s);
  i   = 0;
  if (--len > 0)
    reverse(s);
  s[i++] = s;
}

#include <stdio.h>
#include <math.h>
#include <string.h>

#define    BIGVALUE     (-(int) pow(2, sizeof(int) * 8 - 1))
#define    abs(x)       ((x) < 0 ? -(x) : (x))

void   itoa(int n, char s[]);
void   reverse(char s[]);

int main(void) {
  char  s[1000];
  int   n = BIGVALUE;
  int   x = -123456;

  itoa(n, s);
  printf("%s\n", s);
  itoa(x, s);
  printf("%s\n", s);
  printf("%i\n", BIGVALUE);
  printf("%lu\n", sizeof(int));

  return 0;
}

void itoa(int n, char s[]) {
  int   i, sign;

  sign = n;
  i = 0;
  do {
    s[i++] = abs(n % 10) + '0';
  } while((n /= 10) != 0);
  if (sign < 0)
    s[i++] = '-';
  s[i] = '\0';
  reverse(s);
}

void reverse(char s[]) {
  int   i, j, temp;

  for (i = 0, j = strlen(s)-1; i < j; i++, j--) {
    temp = s[i];
    s[i] = s[j];
    s[j] = temp;
  }
}

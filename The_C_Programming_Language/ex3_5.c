#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define     BIGVALUE    123456789;
#define     abs(x)      ((x) < 0 ? -(x) : (x))

void        itob(int n, char s[], int b);
void        reverse(char s[]);

int main(void) {
  int   n = -BIGVALUE;
  char  s[1000];

  itob(n, s, 16);
  printf("%s\n", s);
  itob(n, s, 2);
  printf("%s\n", s);

  return 0;
}

void itob(int n, char s[], int b) {
  int    i, sign, val;

  if (b < 2 || b > 16) {
    printf("ERROR: Wrong base.\n");
    exit(1);
  }

  sign = n;
  i = 0;
  do {
    val = abs(n % b);
    s[i++] = (val < 10 ? (val + '0') : (val - 10 + 'A'));
  } while((n /= b) != 0);
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

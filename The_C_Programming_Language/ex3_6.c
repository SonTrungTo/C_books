#include <stdio.h>
#include <string.h>

#define   abs(x)    ((x) < 0 ? -(x) : (x))

#define   MIN_FIELD_WIDTH   9
#define   MAXWIDTH          20

void itoa(int n, char s[], int minfieldwidth);
void reverse(char s[]);

int main(void) {
  char   s[MAXWIDTH];

  itoa(123456, s, MIN_FIELD_WIDTH);
  printf("%s\n", s);
  itoa(123456789, s, MIN_FIELD_WIDTH);
  printf("%s\n", s);
  itoa(1232222229, s, MIN_FIELD_WIDTH);
  printf("%s\n", s);

  return 0;
}

void itoa(int n, char s[], int min) {
  int     i, sign;

  sign = n;
  i = 0;
  do {
    s[i++] = abs(n % 10) + '0';
  } while((n /= 10) != 0);
  if (sign < 0)
    s[i++] = '-';
  while (i < min)
    s[i++] = ' ';
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

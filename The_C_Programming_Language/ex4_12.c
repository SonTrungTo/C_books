#include <stdio.h>

#define     MAXSIZE     100
#define     abs(x)      ((x) < 0 ? -(x) : (x))

/* itoa, recursive version, works for the largest negative integer */
void  itoa(int, char []);

void itoa(int n, char s[]) {
  static int    sign, i;

  i = 0;
  sign = 1;
  if (n < 0 && sign) {
    s[i++] = '-';
    sign = 0;
  }
  if (n / 10)
    itoa(n / 10, s);
  s[i++] = abs(n % 10) + '0';
  s[i] = '\0';                  /* End of string is important! */
}

int main(void) {
  char   s[MAXSIZE];
  int    n;

  printf("Enter n: ");
  scanf("%i", &n);
  itoa(n, s);
  printf("String s = %s\n\n", s);

  return 0;
}

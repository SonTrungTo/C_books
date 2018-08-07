#include <stdio.h>

int htoi(char s[]);

int main(void) {
  char   h1[] = "FF";
  char   h2[] = "0x1A";
  char   h3[] = "0X6AF1";

  printf("%s = %d\n", h1, htoi(h1));
  printf("%s = %d\n", h2, htoi(h2));
  printf("%s = %d\n", h3, htoi(h3));

  return 0;
}

int htoi(char s[]) {
  int    i, n;

  n = 0;
  i = 0;
  if (s[0] == '0' && (s[1] == 'x' || s[1] == 'X'))
    i += 2;
  for (; s[i] != '\0'; i++)
    if (s[i] >= '0' && s[i] <= '9')
      n = 16 * n + (s[i] - '0');
    else if (s[i] >= 'a' && s[i] <= 'f')
      n = 16 * n + (10 + (s[i] - 'a'));
    else if (s[i] >= 'A' && s[i] <= 'F')
      n = 16 * n + (10 + (s[i] - 'A'));

  return n;
}

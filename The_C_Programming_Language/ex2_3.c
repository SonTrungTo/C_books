#include <stdio.h>

#define   YES     1
#define   NO      0

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
  int    i, n, hexdigit, inhex;

  inhex = YES;
  n = 0;
  i = 0;
  if (s[i] == '0') {
    ++i;
    if (s[i] == 'x' || s[i] == 'X')
      ++i;
  }
  for (; inhex == YES; i++) {
    if (s[i] >= '0' && s[i] <= '9')
      hexdigit = (s[i] - '0');
    else if (s[i] >= 'a' && s[i] <= 'f')
      hexdigit = (10 + (s[i] - 'a'));
    else if (s[i] >= 'A' && s[i] <= 'F')
      hexdigit = (10 + (s[i] - 'A'));
    else
      inhex = NO;
    if (inhex == YES)
      n = 16 * n + hexdigit;
  }

  return n;
}

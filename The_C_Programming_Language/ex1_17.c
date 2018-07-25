#include <stdio.h>
#define   MAXLINE     100
#define   LINELONG    80

int     getLine(char line[], int size);

int main(void) {
  int     len;
  char    line[MAXLINE];

  while ((len = getLine(line, MAXLINE)) > 0)
    if (len > LINELONG)
      printf("%3d  %s", len, line);

  return 0;
}

int getLine(char s[], int lim) {
  int    c, i, j;

  j = 0;
  for (i = 0; (c = getchar()) != EOF && c != '\n'; i++)
    if (i < lim - 2) {
      s[j] = c;
      ++j;
    }

  if (c == '\n') {
    s[j] = c;
    ++j;
    ++i;
  }

  s[j] = '\0';

  return i;
}

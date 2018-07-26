/* Program to delete leading blanks/tabs */
#include <stdio.h>
#define    MAXLINE    100

int   getLine(char line[], int size);
int   removedLeading(char line[]);

int main(void) {
  int     len;
  char    line[MAXLINE];

  while ((len = getLine(line, MAXLINE)) > 0)
    if (removedLeading(line) > 0)
      printf("%s", line);

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

int removedLeading(char s[]) {
  int    i, j;

  i = 0;
  j = 0;

  while (s[i] == ' ' || s[i] == '\t')
    ++i;

  while (s[i] != '\0') {
    s[j] = s[i];
    ++j;
    ++i;
  }

  s[j] = '\0';

  return (j - 1);
}

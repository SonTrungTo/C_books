/* NOTE: the length of ARBITRARILY LONG input lines */
#include <stdio.h>
#define   MAXLINE   100    /* maximum input line size */

int  getLine(char line[], int size);
void copy(char to[], char from[]);

/* print longest input line */
int main(void) {
  int    len;               /* current line length */
  int    max;               /* maximum line length known */
  char   line[MAXLINE];     /* current input line */
  char   longest[MAXLINE];  /* longest line known */

  max = 0;
  while ((len = getLine(line, MAXLINE)) > 0)
    if ( len > max ) {
      max = len;
      copy(longest, line);
    }
  if (max > 0)              /* there was a line */
    printf("%d,  %s", max, longest);

  return 0;
}

/* getLine: read a line into s[], return length */
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

/* copy: copy 'from' to 'to'; assume to is big enough */
void copy(char to[], char from[]) {
  int     i;

  i = 0;
  while ((to[i] = from[i]) != '\0')
    ++i;
}

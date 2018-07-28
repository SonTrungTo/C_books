#include <stdio.h>
#define   MAXLINE   100
#define   N_COLS    2

int  getLine(char line[], int size);
void detab(char line[]);

int main(void) {
  int    len;
  int    line[MAXLINE];

  while ((len = getLine(line, MAXLINE)) > 0) {
    detab(line);
    printf("%s", line);
  }
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

void detab(char s[]) {
  int    i;

  for (i = 0; s[i] != '\n'; i++) {
    if (s[i] == '\t') {
      /* code */
    }
  }
}

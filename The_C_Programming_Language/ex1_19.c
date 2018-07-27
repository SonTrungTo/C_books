#include <stdio.h>
#define   MAXLINE     100
#define   swap(x,y)   {char z; z = x; x = y; y = z;}

int   getLine(char line[], int size);
void  reverse(char s[]);

int main(void) {
  int    len;
  char   line[MAXLINE];

  while ((len = getLine(line, MAXLINE)) > 0) {
    reverse(line);
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

void reverse(char s[]) {
  int   i, j;

  for (i = 0; s[i] != '\n'; i++)
    ;                             /* Move to the newline character */
  --i;                            /* Move 1 step back */
  for (j = 0; j < i; j++, i--)
    swap(s[i], s[j]);             /* Reverse characters until the median character */
}

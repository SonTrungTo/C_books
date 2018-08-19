#include <stdio.h>
#define     MAXLINE       1000

int  getLine(char s[], int maxline);
void escape(char s[], char t[]);
void unescape(char s[], char t[]);

int main(void) {
  char   s[MAXLINE], t[MAXLINE];

  while (getLine(t, MAXLINE) != 0) {
    printf("Original:  %s", t);
    escape(s, t);
    printf("Escaped:   %s\n", s);
    unescape(t, s);
    printf("Unescaped: %s", t);
    putchar('\n');
  }

  return 0;
}

int getLine(char s[], int lim) {
  int   i, j, c;

  for (i = j = 0; (c = getchar()) != EOF && c != '\n'; i++)
    if (i < lim - 2)
      s[j++] = c;

  if (c == '\n') {
    s[j++] = c;
    ++i;
  }
  s[j] = '\0';

  return i;
}

void escape(char s[], char t[]) {
  int   i, j;

  for (i = j = 0; t[i] != '\0'; i++)
    switch (t[i]) {
      case '\n':
        s[j++] = '\\';
        s[j++] = 'n';
        break;
      case '\t':
        s[j++] = '\\';
        s[j++] = 't';
        break;
      default:
        s[j++] = t[i];
        break;
    }

  s[j] = '\0';
}

void unescape(char s[], char t[]) {
  int   i, j;

  for (i = j = 0; t[i] != '\0'; i++)
    switch (t[i]) {
      case '\\':
        switch (t[++i]) {
          case 'n':
            s[j++] = '\n';
            break;
          case 't':
            s[j++] = '\t';
            break;
          default:
            s[j++] = '\\';
            s[j++] = t[i];
            break;
        }
        break;
    default:
      s[j++] = t[i];
      break;
    }
  s[j] = '\0';
}

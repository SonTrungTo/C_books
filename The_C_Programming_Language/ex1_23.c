#include <stdio.h>

void rcomment(int character);   /* read and find comments           */
void incomment(void);           /* inside comments, finding the end */
void echo_quote(int character); /* quote string constant and character constant*/

int main(void) {
  int    c;

  while ((c = getchar()) != EOF)
    rcomment(c);

  return 0;
}

void rcomment(int c) {
  int     d;

  if (c == '/') {
    if ((d = getchar()) == '*')
      incomment();
    else if (d == '/') {        /* // is not a valid ANSI-C comment. */
      putchar(c);
      rcomment(d);
    }
    else {                      /* Not a comment */
      putchar(c);
      putchar(d);
    }
  }
  else if (c == '\'' || c == '\"')  /* quote strings and character constants properly */
    echo_quote(c);
  else                          /* Not a comment */
    putchar(c);
}

void incomment(void) {
  int     c, d;

  c = getchar();                /* previous character */
  d = getchar();                /* current character  */
  while (c != '*' || d != '/') {
    c = d;
    d = getchar();
  }
}

void echo_quote(int c) {
  int      d;

  putchar(c);
  while ((d = getchar()) != c) {
    putchar(d);
    if (d == '\\')
      putchar(getchar());        /* ignore escape character */
  }
  putchar(d);
}

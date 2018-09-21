#include <stdio.h>
#include <math.h>     /* for double fmod(double, double) */
#include <string.h>   /* for strcmp in mathfunc, for ungets */
#include "calc.h"

#define     BUFSIZE     100

static int  buf[BUFSIZE];   /* buffer for ungetch, type "int" to prevent EOF from being converted to char then to int, which can result unexpected result */
static int  bufp = 0;       /* next free position in buf */
/* This is what happens when there is only one (or none) character to push back */
/* int      buf = 0;                                                            */

int getch(void) { /* get a (possibly pubshed back) character */
  return  (bufp > 0) ? buf[--bufp] : getchar();
  /* int    c;

  if (buf != 0)
    c = buf;
  else
    c = getchar();
  buf = 0;
  return  c;      */
}

void ungetch(int c) { /* push character back on input */
  if (bufp < BUFSIZE)
    buf[bufp++] = c;
  else
    printf("ungetch: buffer full, can't push\n");
  // if (buf != 0)
  //   printf("ungetch: buffer full! Can't get char.\n");
  // else
  //   buf = c;
}

/* ungets(s): push back an entire string onto the input, use ungetch */
/* ungets does not need to know about buf and bufp since ungetch handles the pushback and the error checking. */
void ungets(char s[]) {
  int   len = strlen(s);
  void  ungetch(int);

  while (len > 0)
    ungetch(s[--len]); /* reverse order, can write reverse(s) to fix it! */
}

/* mathfunc: calling functions based on the name string s */
void mathfunc(char s[]) {
  double  op2;

  if (strcmp(s, "sin") == 0)             /* if s == sin, 0 returned */
    push(sin(pop()));
  else if (strcmp(s, "cos") == 0)
    push(cos(pop()));
  else if (strcmp(s, "exp") == 0)
    push(exp(pop()));
  else if (strcmp(s, "pow") == 0) {
    op2 = pop();
    push(pow(pop(), op2));
  }
  else
    printf("ERROR: Unidentified name (%s) for function calls.\n", s);
}

/* getLine: get an entire string into a line, the upgraded version */
int getLine(char s[], int lim) {
  int   c, i, j;

  i = j = 0;
  while ((c = getchar()) != '\n' && c != '\0') {
    if (i < lim - 2)
      s[j++] = c;
    ++i;
  }
  if (c == '\n') {
    s[j++] = c;
    ++i;
  }
  s[j] = '\0';

  return    i;
}

/* reverse Polish calculator, K & R chapter 4 */
#include <stdio.h>
#include <stdlib.h>   /* for atof() */
#include <math.h>     /* for double fmod(double, double) */

#define   MAXOP   100 /* max size of operand or operator */
#define   NUMBER  '0' /* a signal that a number was found */

int    getop(char []);
void   push(double);
double pop(void);

/* reverse Polish calculator */
int main(void) {
  int    type;
  double op2;
  char   s[MAXOP];

  while ((type = getop(s)) != EOF) {
    switch (type) {
      case NUMBER:
        push(atof(s));
        break;
      case '+':
        push(pop() + pop());
        break;
      case '*':
        push(pop() * pop());
        break;
      case '-':
        op2 = pop();
        push(pop() - op2);
        break;
      case '/':
        op2 = pop();
        if (op2 == 0.0)
          printf("ERROR: Division by 0.\n");
        else
          push(pop() / op2);
        break;
      case '%':
        op2 = pop();
        if (op2 == 0.0)
          printf("ERROR: Modulus by 0.\n");
        else
          push(fmod(pop(), op2));
        break;
      case '\n':
        printf("\t%.8g\n", pop());
        break;
      default:
        printf("ERROR: Unknown command %s\n", s);
        break;
    }
  }
  return 0;
}

#define     MAXVAL      100           /* maximum depth of val stack */

int     sp = 0;                       /* next free stack position */
double  val[MAXVAL];                  /* value stack */

/* push: push f onto a value stack */
void push(double f) {
  if (sp >= MAXVAL)
    printf("ERROR: Stack full, can't push %g\n", f);
  else
    val[sp++] = f;
}

/* pop: pop and return top value from stack */
double pop(void) {
  if (sp > 0)
    return  val[--sp];
  else {
    printf("ERROR: Stack empty.\n");
    return  0.0;
  }
}

#include <ctype.h>

int   getch(void);
void  ungetch(int);

/* getop: fetch the next numeric operand or operator */
int getop(char s[]) {
  int i, c;

  while ((s[0] = c = getch()) == ' ' || c == '\t')    /* Dumbing garbage */
    ;
  s[1] = '\0';
  if (!isdigit(c) && c != '.' && c != '+' && c != '-')
    return  c;                                       /* Not a number */
  i = 0;
  if (c == '-') {
    if (isdigit(c = getch()) || c == '.')
      s[++i] = c;                                    /* Fetch negative number */
    else {
      if (c != EOF)
        ungetch(c);
      return  '-';
    }
  }
  if (c == '+') {
    if (isdigit(c = getch()) || c == '.')
      s[++i] = c;                                    /* Fetch positive number */
    else {
      if (c != EOF)
        ungetch(c);
      return  '+';
    }
  }
  if (isdigit(c))
    while (isdigit(s[++i] = c = getch()))           /* Fetch integer part */
      ;
  if (c == '.')
    while (isdigit(s[++i] = c = getch()))          /* Fetch fraction part */
      ;
  s[i] = '\0';
  if (c != EOF)
    ungetch(c);
  return  NUMBER;
}

#define     BUFSIZE     100

char  buf[BUFSIZE];   /* buffer for ungetch */
int   bufp = 0;       /* next free position in buf */

int getch(void) { /* get a (possibly pubshed back) character */
  return  (bufp > 0) ? buf[--bufp] : getchar();
}

void ungetch(int c) { /* push character back on input */
  if (bufp < BUFSIZE)
    buf[bufp++] = c;
  else
    printf("ungetch: buffer full, can't push\n");
}

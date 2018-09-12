/* reverse Polish calculator, K & R chapter 4 */
#include <stdio.h>
#include <stdlib.h>   /* for atof() */
#include <math.h>     /* for double fmod(double, double) */
#include <string.h>   /* for strcmp in mathfunc */

#define   MAXOP     100 /* max size of operand or operator */
#define   NUMBER    '0' /* a signal that a number was found */
#define   NAME      'n' /* a signal that a name was found */

int    getop(char []);
void   push(double);
double pop(void);
void   clear(void);
void   mathfunc(char []);

/* reverse Polish calculator */
int main(void) {
  int    type, last_character, i;
  double op2, temp, v;
  char   s[MAXOP];
  double variable[26];

  for (i = 0; i < 26; i++)
    variable[i] = 0.0;
  while ((type = getop(s)) != EOF) {
    switch (type) {
      case NUMBER:
        push(atof(s));
        break;
      case NAME:
        mathfunc(s);
        break;
      case '=':
        pop();
        if (last_character >= 'A' && last_character <= 'Z')
          push(variable[last_character - 'A'] = pop());
        else
          printf("ERROR: Invalid variable: %c\n", last_character);
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
        v = pop();
        printf("\t%.8g\n", v);
        break;
      case 'p':                       /* print top stack without popping */
        op2 = pop();
        printf("\t%.8g\n", op2);
        push(op2);
        break;
      case 'd':                       /* duplicate top stack */
        op2 = pop();
        push(op2);
        push(op2);
        break;
      case 's':                       /* swap top two elements */
        op2  = pop();
        temp = pop();
        push(op2);
        push(temp);
        break;
      case 'c':                       /* clear the stack */
        clear();
        break;
      default:
        if (type >= 'A' && type <= 'Z')
          push(variable[type - 'A']);
        else if (type == 'v')       /* v is the variable containing the most recently printed output */
          push(v);
        else
          printf("ERROR: Unknown command %s\n", s);
        break;
    }
    last_character = type;          /* This is to save the last variable read */
  }
  return 0;
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

/* clear: clear the stack val */
void clear(void) {
  sp = 0;
}

#include <ctype.h>
#include <string.h>                                   /* used for strlen() */

int   getch(void);
void  ungetch(int);

/* getop: fetch the next numeric operand or operator */
int getop(char s[]) {
  int i, c;

  while ((s[0] = c = getch()) == ' ' || c == '\t')    /* Dumbing garbage */
    ;
  s[1] = '\0';
  i = 0;
  if (islower(c)) {
    while (islower(s[++i] = c = getch()))
      ;
    s[i] = '\0';
    if (c != EOF)
      ungetch(c);                                    /* Went one character too far */
    if (strlen(s) > 1)                               /* name found! */
      return  NAME;
    else
      return  s[--i];                                /* probably just a command */
  }
  if (!isdigit(c) && c != '.' && c != '+' && c != '-')
    return  c;                                       /* Not a number */
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

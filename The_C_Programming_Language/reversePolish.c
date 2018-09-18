/* reverse Polish calculator, K & R chapter 4 */
#include <stdio.h>
#include <stdlib.h>   /* for atof() */
#include <math.h>     /* for double fmod(double, double) */
#include <string.h>   /* for strcmp in mathfunc, for ungets */

#define   MAXLINE   100 /* max size of an input line */
#define   MAXOP     100 /* max size of operand or operator */
#define   NUMBER    '0' /* a signal that a number was found */
#define   NAME      'n' /* a signal that a name was found */

int    getop(char []);
void   push(double);
double pop(void);
void   clear(void);
void   mathfunc(char []);
int    getLine(char [], int);      /* alternative approach to getch and ungetch */

char    line[MAXLINE];             /* an array containing 1 input line */
int     li = 0;                    /* input line index */

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

/* ungets(s): push back an entire string onto the input, use ungetch */
/* ungets does not need to know about buf and bufp since ungetch handles the pushback and the error checking. */
void ungets(char s[]) {
  int   len = strlen(s);
  void  ungetch(int);

  while (len > 0)
    ungetch(s[--len]); /* reverse order, can write reverse(s) to fix it! */
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

  /* An alternative approach using getLine */
  if (line[li] == '\0')
    if (getLine(line, MAXLINE) == 0)
      return EOF;
    else
      li = 0;
  while ((s[0] = c = line[li++]) == ' ' || c == '\t') /* Dumbing garbage */
    ;
  s[1] = '\0';
  i = 0;
  if (islower(c)) {
    while (islower(s[++i] = c = line[li++]))
      ;
    s[i] = '\0';
    li--;
    if (strlen(s) > 1)
      return  NAME;                                    /* name detected! */
    else
      return  s[--i];                                 /* probably just a command */
  }
  if (!isdigit(c) && c != '.' && c != '-' && c != '+')
    return c;                                         /* Not a number */
  if (c == '-') {                                     /* Fetch a negative number */
    if (isdigit(c = line[li++]) || c == '.')
      s[++i] = c;
    else {
      li--;
      return  '-';
    }
  }
  if (c == '+') {                                    /* Fetch a positive number */
    if (isdigit(c = line[li++]) || c == '.')
      s[++i] = c;
    else {
      li--;
      return  '+';
    }
  }
  if (isdigit(c))
    while (isdigit(s[++i] = c = line[li++]))          /* Fetch integer part */
      ;
  if (c == '.')
    while (isdigit(s[++i] = c = line[li++]))          /* Fetch fraction part */
      ;
  s[i] = '\0';
  li--;                                               /* substitute for ungetch, we don't use getchar() so no EOF */
  return  NUMBER;



  // /* This is the textbook approach using getch and ungetch */
  // while ((s[0] = c = getch()) == ' ' || c == '\t')    /* Dumbing garbage */
  //   ;
  // s[1] = '\0';
  // i = 0;
  // if (islower(c)) {
  //   while (islower(s[++i] = c = getch()))
  //     ;
  //   s[i] = '\0';
  //   if (c != EOF)
  //     ungetch(c);                                    /* Went one character too far */
  //   if (strlen(s) > 1)                               /* name found! */
  //     return  NAME;
  //   else
  //     return  s[--i];                                /* probably just a command */
  // }
  // if (!isdigit(c) && c != '.' && c != '+' && c != '-')
  //   return  c;                                       /* Not a number */
  // if (c == '-') {
  //   if (isdigit(c = getch()) || c == '.')
  //     s[++i] = c;                                    /* Fetch negative number */
  //   else {
  //     if (c != EOF)
  //       ungetch(c);
  //     return  '-';
  //   }
  // }
  // if (c == '+') {
  //   if (isdigit(c = getch()) || c == '.')
  //     s[++i] = c;                                    /* Fetch positive number */
  //   else {
  //     if (c != EOF)
  //       ungetch(c);
  //     return  '+';
  //   }
  // }
  // if (isdigit(c))
  //   while (isdigit(s[++i] = c = getch()))           /* Fetch integer part */
  //     ;
  // if (c == '.')
  //   while (isdigit(s[++i] = c = getch()))          /* Fetch fraction part */
  //     ;
  // s[i] = '\0';
  // if (c != EOF)
  //   ungetch(c);
  // return  NUMBER;
}

#define     BUFSIZE     100

int  buf[BUFSIZE];   /* buffer for ungetch, type "int" to prevent EOF from being converted to char then to int, which can result unexpected result */
int  bufp = 0;       /* next free position in buf */
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

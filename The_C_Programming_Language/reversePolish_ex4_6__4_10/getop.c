#include <stdio.h>
#include <ctype.h>
#include <string.h>                                   /* used for strlen() */
#include "calc.h"                                     /* getLine, getch, ungetch */

#define   MAXLINE   100             /* max size of an input line */

char    line[MAXLINE];             /* an array containing 1 input line */
int     li = 0;                    /* input line index */

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

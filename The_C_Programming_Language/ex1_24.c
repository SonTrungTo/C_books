/* Check for errors: parentheses, brackets and braces: Not done in full generality */
/* Just to get the gist of the problem. */
#include <stdio.h>

int      nparen;
int      nbrack;
int      nbrace;

void     check(int c);                    /* check for rudimentary syntax */

int main(void) {
  int         c;
  extern int  nparen, nbrack, nbrace;

  nparen = 0;
  nbrack = 0;
  nbrace = 0;
  while ((c = getchar()) != EOF)
    check(c);

    if (nbrace > 0)
      printf("ERROR: Missing left braces.\n");
    else if (nbrace < 0)
      printf("ERROR: Missing right braces.\n");

    if (nbrack > 0)
      printf("ERROR: Missing left brackets.\n");
    else if (nbrack < 0)
      printf("ERROR: Missing right brackets.\n");
    
    if (nparen > 0)
      printf("ERROR: Missing left parentheses.\n");
    else if (nparen < 0)
      printf("ERROR: Missing right parentheses.\n");

  return 0;
}

void check(int c) {
  extern int   nparen, nbrack, nbrace;

  if (c == '{')                         /* left braces */
    --nbrace;
  else if (c == '}')                    /* right braces */
    ++nbrace;
  else if (c == '[')                    /* left brackets */
    --nbrack;
  else if (c == ']')                    /* right brackets */
    ++nbrack;
  else if (c == '(')                    /* left parentheses */
    --nparen;
  else if (c == ')')                    /* right parentheses */
    ++nparen;
}

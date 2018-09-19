#include <stdio.h>
#include <stdlib.h>   /* for atof() */
#include <math.h>
#include "calc.h"

#define   MAXOP     100 /* max size of operand or operator */

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

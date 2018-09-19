#include <stdio.h>

#define     MAXVAL      100           /* maximum depth of val stack */

/* definitions and declarations */
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

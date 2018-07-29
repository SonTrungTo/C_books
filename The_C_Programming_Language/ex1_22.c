#include <stdio.h>
#define    TABINC   8
#define    MAXCOL   15

int  exptabs(int pos);
void printl(int pos);
int  find_blanks(int pos);
int  new_pos(int pos);

int main(void) {
  int    c, pos;
  char   line[MAXCOL];

  pos = 0;
  while ((c = getchar()) != EOF) {
    line[pos] = c;
    if (c == '\t') /* turning tabs into blanks */
      pos = exptabs(pos);
    else if (c == '\n') {
      printl(pos);
      pos = 0;
    }
    else if (++pos >= MAXCOL) {
      pos = find_blanks(pos);     /* Position pos intelligently so that half-word are not printed */
      printl(pos);
      pos = new_pos(pos);         /* Position pos after the folding */
    }
  }

  return 0;
}

/* Print lines from 0 to pos - 1 and add newline char, if necessary  */
void printl(int pos) {
  int   i;

  for (i = 0; i < pos; i++)
    putchar(line[pos]);

  if (pos > 0)                 /* Is this non-blank character? */
    putchar('\n');
}

/* Expand tabs: turning tabs into blanks */
int exptabs(int pos) {
  line[pos] = ' ';
  ++pos;

  for (; (pos < MAXCOL) && (pos % TABINC != 0) ; pos++)
    line[pos] = ' ';

  if (pos < MAXCOL)
    return pos;
  else {                      /* if the line is full */
    
  }

}

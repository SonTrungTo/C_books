#include <stdio.h>
#define    TABINC   8
#define    MAXCOL   15

char   line[MAXCOL];

int  exptabs(int pos);
void printl(int pos);
int  find_blanks(int pos);
int  new_pos(int pos);

int main(void) {
  int    c, pos;

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
    putchar(line[i]);

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
  else {                      /* if the line is full, print line and reset pos */
    printl(pos);
    return 0;
  }
}

/* find_blanks: find blanks */
int find_blanks(int pos) {
  for (; pos > 0 && line[pos] != ' '; pos--)
    ;
  if (pos > 0)          /* We want blanks within the line, not at the end or the beginning */
    return (pos+1);     /* position after the blank! */
  else
    return MAXCOL;
}

/* new_pos: positioning after the newline character is put*/
int new_pos(int pos) {
  int     i, j;

  i = 0;
  if (pos <= 0 || pos >= MAXCOL)
    return 0;
  for (j = pos; j < MAXCOL; j++) {
    line[i] = line[j];
    ++i;
  }

  return  i;
}

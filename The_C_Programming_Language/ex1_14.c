#include <stdio.h>
#include <ctype.h>

#define         MAX_HIST    400
#define         MAX_CHAR    127   /* isprint() recognizes 32-126 */

/* This prints the vertical histogram of as many different characters as possible */
/* The rest are ignored! */

int main(void) {
  int    c, i, j, max_cc = 0;
  int    cc[MAX_CHAR];
  int    cn[MAX_CHAR];

  for (i = 0; i < MAX_CHAR; i++)
    cc[i] = 0;

  while ( (c = getchar()) != EOF )
    if (isprint(c) > 0)
      ++cc[c];

  for (i = 0; i < MAX_CHAR; i++)
    cn[i] = cc[i];

  for (i = 1; i < MAX_CHAR; i++)
    if (max_cc < cc[i])
      max_cc = cc[i];

  if (max_cc > MAX_HIST)
    printf("WARNING: Max character counts(%d) greater than max histogram(%d)\n",
  max_cc, MAX_HIST);

  for (i = MAX_HIST; i > 0; i--) {
    if (i == max_cc) {
      for (j = 0; j < MAX_CHAR; j++)
        if (cc[j] > 0 && cc[j] == max_cc) {
          --cc[j];
          printf("  * ");
        }
        else if (cc[j] > 0)
          printf("    ");
      --max_cc;
    }
    putchar('\n');
  }

  putchar('\n');

  for (i = 0; i < MAX_CHAR; i++)
    if (cn[i] > 0)
      printf("%3d ", cn[i]);
  putchar('\n');
  for (i = 0; i < MAX_CHAR; i++)
    if (cn[i] > 0)
      printf("%3s ", "---");
  putchar('\n');
  for (i = 0; i < MAX_CHAR; i++)
    if (cn[i] > 0)
      printf("%3c ", i);
  putchar('\n');

  return 0;
}

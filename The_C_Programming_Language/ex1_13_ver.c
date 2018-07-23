#include <stdio.h>

#define     OUT         0
#define     IN          1
#define     MAX_LENGTH  25
#define     MAX_HIST    64

int main(void) {
  int    c, i, j, state, legnth;
  int    max_words;
  int    wl[MAX_LENGTH];
  int    wn[MAX_LENGTH];          /* This array is used for label */
  int    wc;
  int    overflow;

  for (i = 0; i < MAX_LENGTH; i++)
    wl[i] = 0;

  max_words = 0;
  overflow = 0;
  wc = 0;
  state = OUT;
  while ( (c = getchar()) != EOF ) {
    if (c == ' ' || c == '\t' || c == '\n') {
      state = OUT;
      if (wc > MAX_LENGTH)
        ++overflow;
      else if (wc > 0)
        ++wl[wc];
      wc = 0;
    }
    else if (state == OUT) {
      state = IN;
      wc = 1;
    }
    else
      ++wc;
  }

  for (i = 0; i < MAX_LENGTH; i++)
    wn[i] = wl[i];

  for (i = 1; i < MAX_LENGTH; i++)
    if (max_words < wl[i])
      max_words = wl[i];

  if (max_words > MAX_HIST)
    printf("WARNING: Word counters (%d) exceed maximum length of histogram (%d).\n",
  max_words, MAX_HIST);

  for (i = MAX_HIST; i > 0; i--) {
    if (i == max_words) {
      for (j = 1; j < MAX_LENGTH; j++)
        if ( wl[j] > 0 && wl[j] == max_words ) {
          --wl[j];
          printf(" * ");
        }
        else if (wl[j] > 0)
          printf("   ");
      --max_words;
    }
    putchar('\n');
  }

  putchar('\n');

  for (i = 1; i < MAX_LENGTH; i++)
    if (wn[i] > 0)
      printf("%2d ", wn[i]);
  putchar('\n');
  for (i = 1; i < MAX_LENGTH; i++)
    if (wn[i] > 0)
      printf("%2s ", "--");
  putchar('\n');
  for (i = 1; i < MAX_LENGTH; i++)
    if (wn[i] > 0)
      printf("%2d ", i);
  putchar('\n');

  if (overflow > 0)
    printf("There are %d overflown words that are greater than %d\n", overflow, MAX_LENGTH);

  return 0;
}

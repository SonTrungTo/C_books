#include <stdio.h>

#define     OUT         0
#define     IN          1
#define     MAX_LENGTH  25
#define     MAX_HIST    64

int main(void) {
  int    c, i, state, legnth;
  int    max_words;
  int    wl[MAX_LENGTH];
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
      
    }
    else
  }

  return 0;
}

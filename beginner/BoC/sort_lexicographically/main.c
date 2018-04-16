/* Sort words lexicographically. */
#include "sort.h"

int main(void) {
  char   word[MAXWORD];     /* word to read from the terminal */
  char   *w[N];             /* array of pointers */
  int    n;                 /* number of words to be sorted */
  int    i;

  for (i = 0; scanf("%s", word) == 1; i++) {
    if (i >= N)
      error_too_many_words();
    if (strlen(word) >= MAXWORD)
      error_word_too_long();
    w[i] = malloc(strlen(word) + 1); // sizeof(char) = 1;
    if (w[i] == NULL)
      error_calloc_failed();
    strcpy(w[i], word);
  }
  n = i;
  sort_words(w, n);         /* sort the words */
  wrt_words(w, n);          /* write the list of sorted words */
  return 0;
}

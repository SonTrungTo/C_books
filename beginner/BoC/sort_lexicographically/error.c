#include "sort.h"

void error_too_many_words(void) {
  printf("ERROR: At most %d words can be sorted - bye!\n", N);
  exit(1);
}

void error_word_too_long(void) {
  printf("%s%d%s",
          "ERROR: A word longer than ", MAXWORD,
          " has been found!\n");
  exit(1);
}

void error_calloc_failed(void) {
  printf("ERROR: calloc() failed to allocate the requested memory - bye!\n");
  exit(1);
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXWORD   50      /* maximum length of a word */
#define N        300     /* maximum words in a file */

void  error_too_many_words(void);
void  error_word_too_long(void);
void  error_calloc_failed(void);
void  sort_words(char *w[], int n);
void  swap(char **p, char **q);
void  wrt_words(char *w[], int n);

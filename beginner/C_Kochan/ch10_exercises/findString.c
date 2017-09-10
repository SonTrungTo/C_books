/**
*   findString(source,search);
* This function determines if the search character string is inside the source
* character string.
*/
#include <stdio.h>

int findString(const char source[], const char search[]) {
  int i = 0, j = 0;

  // Stop before the element null.
  while (search[0] != source[j] && source[j + 1])
    ++j;

  do {
    if (search[i] != source[j + i])
      return -1;
    if ( search[i] )
      ++i;
  } while(search[i] != '\0');

  return j;
}

int main(void) {
  int        findString(const char source[], const char search[]);

  printf("%i\n", findString("a chatterbox","hat"));
  printf("%i\n", findString("","abc"));
  printf("%i\n", findString("a","")); // This is due to overflowing buffer!
  printf("%i\n", findString("Anime","nim"));
  printf("%i\n", findString("",""));

  return 0;
}

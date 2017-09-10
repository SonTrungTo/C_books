/**
*   replaceString(source,s1,s2);
* Function replace s1 in source with s2.
*/
#include <stdio.h>

int findString(const char source[], const char search[]) {
  int i = 0, j = 0;

  while (search[0] != source[j] && source[j + 1] && source[0])
    ++j;

  do {
    if (search[i] != source[j + i])
      return -1;
    if ( search[i] )
      ++i;
  } while(search[i] != '\0');

  return j;
}

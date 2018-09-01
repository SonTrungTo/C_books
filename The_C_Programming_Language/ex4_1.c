#include <stdio.h>
#include <string.h>

int strrindex(char s[], char t[]);

int main(void) {
  char   s[] = "abcdef";
  char   t[] = "bc";

  printf("%i\n", strrindex(s, t));

  return 0;
}

int strrindex(char s[], char t[]) {
  int     i, j, k;

  for (i = strlen(s) - 1; i >= 0; i--) {
    for (j = i, k = strlen(t) - 1; s[j] == t[k] && j >= 0 && k >= 0; --j, --k)
      ;
    if (k == -1 && t[0] != '\0')
      return i;
  }
  return    -1;
}

// Exercise 10: compareStrings(s1,s2) returns 1 if s1 > s2, 0 if s1 = s2 and -1 if s1 < s2.
#include <stdio.h>

int compareStrings(char *s1, char *s2) {
  while (*s1 == *s2 && *s1) {
    ++s1;
    ++s2;
  }
  if (*s1 < *s2)
    return -1;
  else if (*s1 > *s2)
    return 1;
  else
    return 0;
}

int main(void) {
  int compareStrings(char *s1, char *s2);

  printf("%i\n", compareStrings("Naked Snake","Wuxia"));
  printf("%i\n", compareStrings("Vietnamese","Vietnamese"));
  printf("%i\n", compareStrings("C ","C"));

  return 0;
}

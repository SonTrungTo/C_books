#include <stdio.h>

int   any(char s1[], char s2[]);

int main(void) {
  char  s1[] = "abcdffghhgngbrertyr";
  char  s2[] = "skrs";
  char  s3[] = "z";

  printf("%d\n", any(s1, s2));
  printf("%d\n", any(s2, s3));
  printf("%d\n", any(s1, s3));

  return 0;
}

int   any(char s1[], char s2[]) {
  int   i, j;

  for (i = 0; s1[i] != '\0'; i++) {
    for (j = 0; s2[j] != s1[i] && s2[j] != '\0'; j++)
      ;
    if (s2[j] != '\0')
      return i;
  }

  return -1;
}

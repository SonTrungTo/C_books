#include <stdio.h>

#define     YES     1
#define     NO      0

/* squeeze(s1,s2) deletes any occurences of s2 in s1 */
void   squeeze(char s1[], char s2[]);

int main(void) {
  char  s1[] = "Finland is a great!";
  char  s2[] = "I have lived in Fin";

  printf("Before--\n");
  printf("%s\n", s1);
  printf("%s\n\n", s2);
  squeeze(s1,s2);
  printf("After--\n");
  printf("%s\n", s1);
  printf("%s\n\n", s2);

  return 0;
}

void squeeze(char s1[], char s2[]) {
  int    i, j, noMatch;

  noMatch = YES;
  for (i = 0; s1[i] != '\0'; i++) {

  }
}

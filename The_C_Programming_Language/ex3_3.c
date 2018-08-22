#include <stdio.h>
#include <ctype.h>

#define  MAXLINE    1000

void  expand(char s1[], char s2[]);

int main(void) {
  char s1[MAXLINE] = "a-z";
  char s2[MAXLINE];

  expand(s1, s2);
  printf("%s\n", s2);

  return 0;
}

void expand(char s1[], char s2[]) {
  int    c, i, j;

  j = 0;
  for (i = 0; isspace(s1[i]); i++)   /* skip trailing spaces */
    ;
  if (isalpha((c = s1[i++])))
    if (s1[i++] = '-')
      while (c <= s1[i] && isalpha(s1[i]))
        s2[j++] = c++;

   s2[j] = '\0';
}

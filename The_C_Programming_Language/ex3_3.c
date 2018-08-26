#include <stdio.h>

#define  MAXSIZE    1000

void  expand(char s1[], char s2[]);

int main(void) {
  char    s1[MAXSIZE], s2[MAXSIZE];

  printf("Enter short-handed notation to be expanded:\n");
  while (scanf("%s", s1) != 0 && s1[0] != '!') {
    expand(s1, s2);
    printf("%s", s2);
    putchar('\n');
  }
  printf("Program finished!\n");
  return  0;
}

void expand(char s1[], char s2[]) {
  int     c, i, j;

  i = j = 0;
  while ((c = s1[i++]) != '\0') {
    if (s1[i] == '-' && s1[i + 1] >= c) {
      ++i;
      while (c < s1[i])
        s2[j++] = c++;
    }
    else
      s2[j++] = c;
  }
  s2[j] = '\0';
}

/* Program to check for braces simultaneously */
/* The case for parentheses is generated easily! */
#include <stdio.h>

int main(void) {
  int     left_cnt = 0, right_cnt = 0, missing_right_braces, i;
  int     c;

  while ( (c = getchar()) != EOF) {
    if (c == '{')
      ++left_cnt;
    else if (c == '}')
      ++right_cnt;

    if (left_cnt < right_cnt && c == '}') {
        for (i = 2; i > 0; --i)
          putchar('?');
        --right_cnt;
    }
    else
        putchar(c);
  }

  printf("\n\n");
  if (left_cnt > right_cnt) {
    printf("ERROR: Missing right braces: ");
    for (missing_right_braces = left_cnt - right_cnt; missing_right_braces > 0; --missing_right_braces)
      printf("}");
    printf("\n\n");
  }
  else
    printf("Everything is alright!\n\n");

  return 0;
}

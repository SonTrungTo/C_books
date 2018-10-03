/* Credits go to the solution manual. I can't solve this problem! */
#include <stdio.h>
#include <string.h>

#define     MAXSIZE     100

void   reverse(char []);

void reverse(char s[]) {
  void    reverser(char s[], int i, int len);

  reverser(s, 0, strlen(s));
}

void reverser(char s[], int i, int len) {
  int     j, c;

  j = len - (i + 1);                    /* the right index of a string */
  if (i < j) {
    c = s[i];
    s[i] = s[j];
    s[j] = c;
    reverser(s, ++i, len);
  }
}

int main(void) {
  char   s[] = "abcde";

  printf("Before: %s\n", s);
  reverse(s);
  printf("After : %s\n", s);

  return 0;
}

#include <stdio.h>

int is_palindrome(char *s);

int main(void) {
  char s;

  printf("Enter the palindrome: ");
  while (scanf("%s", &s) == 1) {
    if (is_palindrome(&s))
      printf("It is a palindrome!\n");
    else
      printf("No it is not!\n");
  }

  printf("Bye!\n\n");

  return 0;
}

int is_palindrome(char *s) {
  char *p = s;

  while (*p)
    ++p;        // go to the end of the string!
  while (*s != '\0' && *--p == *s++)
    ;
  if (!*s)
    return 1;
  else
    return 0;
}

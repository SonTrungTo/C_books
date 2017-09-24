// Exercise 12: Testing some declarations...
#include <stdio.h>

int main(void) {
  char *message = "Programming in C is fun.\n";
  char message2[] = "You said it.\n";
  char *format = "x = %i\n";
  int  x = 100;

  // Set 1 : message is a character pointer
  printf("Programming in C is fun.\n");
  printf("%s", "Programming in C is fun.\n");
  printf("%s", message);
  // printf(message); This is not the right printf because its first argument is
  // a string literal.
  printf("\n\n");

  // Set 2 : message2 is an array of characters.
  printf("You said it.\n");
  printf("%s", message2);
  // printf(message2); Not valid since the first argument MUST BE a string literal.
  printf("%s", &message2[0]);
  printf("\n\n");

  // Set 3: message2 again!
  printf("said it.\n");
  // printf(message2 + 4);
  printf("%s", message2 + 4);
  printf("%s", &message2[4]);
  printf("\n\n");

  // Set 4: format is a pointer to constant character string.
  printf("x = %i\n", x);
  printf(format, x); // This is a perfectly valid because printf contains
  // a second argument, x. This makes printf treats format as a string literal.

  return 0;
}

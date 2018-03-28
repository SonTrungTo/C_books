/* What is wrong? */
#include <stdio.h>

int main(void) {
  char c = 0xff;

  /* char maximum value is 2^7 - 1 = 127 => integer overflow! */
  if (c == 0xff) {
    printf("Truth!\n");
  } else
    printf("This needs to be explained!\n");

  return 0;
}

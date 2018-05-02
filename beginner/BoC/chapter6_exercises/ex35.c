#include <stdio.h>

int main(void) {
  char  *p[2][3] = { "abc", "defg", "hi", "jklmno",
                     "pqrstuvw", "xyz"  };

  printf("***p = %c\n", ***p);
  printf("**p[1] = %c\n", **p[1]);             // p[1][0][0];
  printf("**(p[1] + 1) = %c\n", **(p[1] + 1)); // p[1][2][0];
  // printf("*(*(p + 1) + 2)[7] = %c\n", *(*(p + 1) + 2)[7]);
  // This is wrong: [7] is evaluated first!
  printf("(*(*(p + 1) + 1))[7] = %c\n", (*(*(p + 1) + 1))[7]); // p[1][2][7]
  printf("*(p[1][2] + 2) = %c\n", *(p[1][2] + 2)); // p[1][2][2]

  return 0;
}

#include <stdio.h>

int main(void) {
  printf("\n%s%s\n",
    "(a)"," she sells sea shells by the seashore.");
  printf("\n%s%s\n%s\n%s\n",
    "(b)", " she sells",
           " sea shells",
           " by the seashore.");
  printf("\n%s\n%s\n%s\n",
    "(c)---------------------------------------",
    " | she sells sea shells by the seashore. |",
    " -----------------------------------------");

  return 0;
}

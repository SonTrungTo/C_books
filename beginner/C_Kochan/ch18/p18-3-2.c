// Example 18.3 revised: DEBUG with level defined.
#include <stdio.h>
#include <stdlib.h>
#include "DEBON.h"

int Debug; // Define global variable for the debugging level.

int process(int i1, int i2) {
  int val;

  DEBUG(1,"process (%i, %i)\n", i1, i2);
  val = i1 * i2;
  DEBUG(3,"return %i\n",val);

  return val;
}

int main(int argc, char const *argv[]) {
  int arg1 = 0, arg2 = 0;

  if (argc > 2)
    arg1 = atoi(argv[2]);
  if (argc == 4) {
    arg2 = atoi(argv[3]);
  }
  if (argv[1] == "-d1") {
    Debug = 1;
  }
  DEBUG(1,"processed %i arguments\n", argc - 2);
  DEBUG(3,"arg1 = %i, arg2 = %i\n", arg1, arg2);
  printf("%i\n", process(arg1, arg2));

  return 0;
}

/* Count uppercase letters in a file. */
#include <stdio.h>  // where fopen's prototype is
#include <stdlib.h> // wwhere fopen is

int main(int argc, char const *argv[]) {
  int    c, i , letter[26];
  FILE   *ifp, *ofp;

  if (argc != 3) {
    printf("\n%s%s%s\n\n%s\n%s\n\n",
      "Usage:   ", argv[0], " infile outfile",
      "The uppercase letters in infile will be counted.",
      "The results will be written in outfile.");
    exit(1);
  }
  

  return 0;
}

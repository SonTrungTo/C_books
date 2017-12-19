// Exercise 3: Program to copy one file to another, replacing
// all lowercase characters with their uppercase equivalents.
#include <stdio.h>
#include <stdlib.h>

void copyFileUpper(void) {
  char inName[64], outName[64];
  FILE *in, *out;
  int  c;

  // Requesting file names from the user
  printf("Enter the name of the file to be copied: ");
  scanf("%63s", inName);
  printf("Enter the name of output file: ");
  scanf("%63s", outName);

  // Checking if the copy operation works properly and creating output,
  if ( (in = fopen(inName,"r")) == NULL ) {
    fprintf(stderr,"Can't open %s for reading.\n", inName);
    exit(EXIT_FAILURE);
  }

  if ( (out = fopen(outName,"w")) == NULL ) {
    fprintf(stderr,"Can't open %s for writing.\n", outName);
    exit(EXIT_FAILURE);
  }

  // Replacing lowercase letters with uppercase equivalents
  while ( (c = getc(in)) != EOF ) {
    if (c >= 'a' && c <= 'z')
      putc(c - 'a' + 'A',out);
    else
      putc(c,out);
  }

  // Closing files,
  fclose(in);
  fclose(out);

  printf("File has been copied with uppercase equivalents.\n");
}

int main(void) {
  void   copyFileUpper(void);

  copyFileUpper();

  return 0;
}

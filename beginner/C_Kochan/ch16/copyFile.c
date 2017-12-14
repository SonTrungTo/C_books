// Program 16.3: Program to copy one file to another.
#include <stdio.h>

int main(void) {
  char   inName[64], outName[64];
  FILE   *in, *out;
  int    c;

  // get the file names from user
  printf("Enter the name of the file to be copied: ");
  scanf("%63s", inName);
  printf("Enter the name of ouput file: ");
  scanf("%63s", outName);

  // open input and ouput files
  if ( (in = fopen(inName,"r")) == NULL ) {
    printf("Cannot open %s for reading.\n", inName);
    return 1;
  }

  if ( (out = fopen(outName,"w")) == NULL ) {
    printf("Cannot open %s for writing.\n", outName);
    return 2;
  }

  // copy in to out
  while ( (c = getc(in)) != EOF )
    putc(c,out);

  // close open files
  fclose(in);
  fclose(out);

  printf("File has been copied.\n");

  return 0;
}

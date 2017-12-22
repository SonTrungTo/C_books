// Exercise 4: Program to merge lines alternately from two different files.
#include <stdio.h>
#include <stdlib.h>

void mergeLines(void) {
  char file1Name[64], file2Name[64], buffer1[64], buffer2[64];
  FILE *in1, *in2;
  int  c1, c2;

  // Name of files.
  printf("Enter the name of the first file: ");
  scanf("%63s", file1Name);
  printf("Enter the name of the second file: ");
  scanf("%63s", file2Name);
  printf("\n\n");

  // Test of opening files
  if ( (in1 = fopen(file1Name,"r")) == NULL ) {
    fprintf(stderr, "Can't open %s for reading.", file1Name);
    exit(EXIT_FAILURE);
  }

  if ( (in2 = fopen(file2Name,"r")) == NULL ) {
    fprintf(stderr, "Can't open %s for reading.", file2Name);
    exit(EXIT_FAILURE);
  }

  // Merging lines alternately between two files
  while ( (c1 = getc(in1)) != EOF || (c2 = getc(in2)) != EOF ) {
    if ( c1 == EOF ) {
      putc(c2,stdout);
      fgets(buffer2,64,in2);
      fputs(buffer2,stdout);
    } else if ( (c2 = getc(in2)) == EOF ) { // Because of short circuit evaluation!
      putc(c1,stdout);
      fgets(buffer1,64,in1);
      fputs(buffer1,stdout);
    } else {
      putc(c1,stdout);
      fgets(buffer1,64,in1);
      fputs(buffer1,stdout);
      putc(c2,stdout);
      fgets(buffer2,64,in2);
      fputs(buffer2,stdout);
    }
  }

  // Closing files
  fclose(in1);
  fclose(in2);

  printf("\n\n");
  printf("Files have been successfully alternately merged!\n");

}

int main(void) {
  void mergeLines(void);

  mergeLines();

  return 0;
}

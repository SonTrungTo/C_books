// Exercise 4: Program to merge lines alternately from two different files.
#include <stdio.h>
#include <stdlib.h>

void mergeLines(void) {
  char file1Name[64], file2Name[64], buffer1[64], buffer2[64];
  FILE *in1, *in2;
  int  c;

  // Name of files.
  printf("Enter the name of the first file: ");
  scanf("%63s", file1Name);
  printf("Enter the name of the second file: ");
  scanf("%63s", file2Name);

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
  // First testing how fgets works!
  fgets(buffer1,64,in1);
  fputs(buffer1,stdout);
  fgets(buffer2,64,in2);
  fputs(buffer2,stdout);
  fgets(buffer1,64,in1);
  fputs(buffer1,stdout);

  // Closing files
  fclose(in1);
  fclose(in2);

}

int main(void) {
  void mergeLines(void);

  mergeLines();

  return 0;
}

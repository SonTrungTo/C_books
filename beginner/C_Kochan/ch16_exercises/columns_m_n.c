// Exercise 5: Write columns m through n of each line of a file to stdout.
// The program accepts the values of m and n from the terminal window.
#include <stdio.h>
#include <stdlib.h>

void columns_m_n(void) {
  char  fileName[64], lineOfText[64], buffer[64];
  FILE  *in;
  int   columnValue, charLength, i;

  // filename from user and values of m through n
  printf("Enter the name of the file: ");
  scanf("%63s", fileName);
  printf("Enter the column number: ");
  scanf("%i", &columnValue);
  printf("Enter the character length: ");
  scanf("%i", &charLength);

  // reading file and checking value of m and n
  if ( (in = fopen(fileName,"r")) == NULL ) {
    fprintf(stderr,"Cannot open %s for reading.\n", fileName);
    exit(EXIT_FAILURE);
  }

  while ( (fgets(lineOfText,64,in)) != NULL ) {
    for (i = 0; i < charLength; i++) {
      lineOfText[(columnValue - 1) + i] = buffer[i];
    }
    buffer[i + 1] = '\n';
    fputs(lineOfText,stdout);
  }

  printf("\n\n");
  printf("Output has been displayed at m through n.\n");

}

int main(void) {
  void  columns_m_n(void);

  columns_m_n();

  return 0;
}

// Exercise 5: Write columns m through n of each line of a file to stdout.
// The program accepts the values of m and n from the terminal window.
#include <stdio.h>
#include <stdlib.h>

void columns_m_n(void) {
  char  fileName[64], lineOfText[81], buffer[64];
  FILE  *in;
  int   columnValue, charLength, i;

  // filename from user and values of m through n
  printf("Enter the name of the file: ");
  scanf("%63s", fileName);
  printf("Enter the column number: ");
  scanf("%i", &columnValue);
  printf("Enter the character length: ");
  scanf("%i", &charLength);
  printf("\n\n");

  // reading file and checking value of m and n
  if ( (in = fopen(fileName,"r")) == NULL ) {
    fprintf(stderr,"Cannot open %s for reading.\n", fileName);
    exit(EXIT_FAILURE);
  }
  if (columnValue < 1 || columnValue > 64) {
    fprintf(stderr, "Bad column value. (m is bad)\n");
    exit(EXIT_FAILURE);
  }
  if (charLength < 1) {
    fprintf(stderr, "Bad character length. (n is bad)\n");
    exit(EXIT_FAILURE);
  }

  // Write columns m through n of each line
  while ( (fgets(lineOfText,81,in)) != NULL ) { // Very weird! if the lineOfText is too small(64), it can cause unpredictable results!
    for (i = 0; i < charLength; i++) {
      buffer[i] = lineOfText[(columnValue - 1) + i];
    }
    if (buffer[i] != '\0' || buffer[i] != '\n')
      buffer[i] = '\n';
    fputs(buffer,stdout);
  }

  // Closing file
  fclose(in);

  printf("\n\n");
  printf("Output has been displayed at m through n.\n");

}

int main(void) {
  void  columns_m_n(void);

  columns_m_n();

  return 0;
}

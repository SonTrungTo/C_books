// Exercise 6: Program to display the contents of a file at the terminal 20 lines
// 'q' := program should stop, other character := display the next 20 lines.
#include <stdio.h>
#include <stdlib.h>

void display20Lines(void) {
  char  fileName[64], buffer[81], c;
  FILE  *in;

  // Enter file name from the user,
  printf("Enter the name of the file: ");
  scanf("%63s", fileName);
  printf("q: quit the program, else: display next 20 lines\n");
  printf("Enter the mode: ");
  scanf("\n");

  // Open the files
  if ( (in = fopen(fileName,"r")) == NULL ) {
    fprintf(stderr, "Can't open %s for reading.\n", fileName);
    exit(EXIT_FAILURE);
  }

  // Display 20 lines at the terminal
  for (int j = 0; ; j++) {
    scanf("%c", &c);

    if (c == 'q') {
      printf("Program terminated!\n");
      exit(EXIT_SUCCESS);
    }
    else
      for (int i = 0; i < 20; i++) {
        if ( fgets(buffer,81,in) != NULL ) {
          printf("%i ", i + 1);
          fputs(buffer,stdout);
        }
      }

    printf("\n\n");
    scanf("%c", &c); // scanf reads from the last scanf, hence 2 scanfs
  }

  // Close opened file
  fclose(in);

}

int main(void) {
  void  display20Lines(void);

  display20Lines();

  return 0;
}

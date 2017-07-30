/* Transpose matrix function
*/
#include <stdio.h>

int main(void) {
  int    matrix[4][5] = {
                          { 1,  2,  3,  4,   5},
                          { 6,  7,  8,  9,  10},
                          {-1, -2, -3, -4,  -5},
                          {-6, -7, -8, -9, -10}
  };
  int    tMatrix[5][4];
  void   transposeMatrix(int nRows, int nCols, int matrix[nRows][nCols], int tMatrix[nCols][nRows]);
  void   displayMatrix(int nRows, int nCols, int matrix[nRows][nCols]);

  printf("The original matrix is: \n");
  displayMatrix(4, 5, matrix);

  transposeMatrix(4, 5, matrix, tMatrix);

  printf("\n\nThe transposed matrix is: \n");
  displayMatrix(5, 4, tMatrix);

  return 0;
}

void transposeMatrix(int nRows, int nCols, int matrix[nRows][nCols], int tMatrix[nCols][nRows]) {
  int row, column;

  for (row = 0; row < nRows; row++)
    for (column = 0; column < nCols; column++)
      tMatrix[column][row] = matrix[row][column];
}

void displayMatrix(int nRows, int nCols, int matrix[nRows][nCols]) {
  int row, column;

  for (row = 0; row < nRows; row++) {
    for (column = 0; column < nCols; column++)
      printf("%5i ", matrix[row][column]);
    printf("\n");
  }
}

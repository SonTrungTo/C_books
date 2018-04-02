/* Truth table for some boolean functions */
#include <stdio.h>

#define BOOLEX (0 ? 'F' : 'T')

int main(void) {
  int    b1, b2, b3, b4;
  int    cnt = 0;

  printf("%5s%5s%5s%5s%5s%9s%9s%9s\n\n",
      "Cnt", "b1", "b2", "b3", "b4", "fct1", "fct2", "fct3");

  for (b1 = 0; b1 <= 1; b1++)
    for (b2 = 0; b2 <= 1; b2++)
      for (b3 = 0; b3 <= 1; b3++)
        for (b4 = 0; b4 <= 1; b4++)
          printf("%4d%5d%5d%5d%5d%9d%9d%9d\n",
          ++cnt, b1, b2, b3, b4, b1 || b2 || b3 || b4,
          b1 && b2 && b3 && b4, (b1 && !b2) && !(b3 && !b4));

  return 0;
}

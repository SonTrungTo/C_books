#include "include.h"

int main(void) {
  printf("abcd = ");
  bit_print(pack_bits('a', 'b', 'c', 'd'));
  printf("unpack(pack_bits('a', 'b', 'c', 'd'), 3) = %c\n",
unpack(pack_bits('a', 'b', 'c', 'd'), 3));
  printf("sizeof(short) = %lu bytes.\n", sizeof(short));

  return 0;
}

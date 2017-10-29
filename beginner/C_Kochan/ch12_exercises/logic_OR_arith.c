// This program determines whether the right shift is a logical or an arithmetic one.
// ASSUMPTION: The value is 32 bits.
// 0:= arithmetic shift, 1:= logical shift.
#include <stdio.h>

int typeRightShift(signed int value) {
  int         isLogicalShift;
  signed int  bits;

  bits = value >> 31; // Fill all 31 left most high order bits with either 0 or 1.
  if (bits == 0 || bits == -1)
    isLogicalShift = 1;
  else
    isLogicalShift = 0;

  return isLogicalShift;
}

int main(void) {
  int          typeRightShift(signed int value);
  signed int   w1 = 0xF777EE22, w2 = 0xff;

  printf("%i\n", typeRightShift(w1));
  printf("%i\n", typeRightShift(w2));

  return 0;
}

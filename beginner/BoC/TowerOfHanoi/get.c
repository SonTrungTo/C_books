#include "hanoi.h"

int get_n_from_user(void) {
  int   n;

  printf("%s",
  "-----\n"
  "TOWERS OF HANOI:\n"
  "\n"
  "There are three towers: A, B, and C.\n"
  "\n"
  "All disks on Tower A must be moved to Tower C. Only one\n"
  "disk can be moved at a time, and the order on each tower\n"
  "cannot be changed. Any of the towers A, B, or C can be\n"
  "used as an intermediate placement of a disk.\n"
  "\n"
  "The problem starts with n disks on Tower A.\n"
  "\n"
  "Input n:  ");
  if (scanf("%d", &n) != 1 || n < 1) {
    printf("\nERROR: Positive intergers not found -- bye!\n\n");
    exit(1);
  }
  printf("\n");

  return n;
}

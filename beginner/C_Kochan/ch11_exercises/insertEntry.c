/**
*  insertEntry(*entry_insert, *element_after);
* This inserts a new entry in the linked list after the element specified
* in the second argument.
*/
#include <stdio.h>

struct entry {
  int          value;
  struct entry *next;
};

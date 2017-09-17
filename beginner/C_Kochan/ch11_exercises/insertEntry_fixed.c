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

void insertEntry(struct entry *listEntry, struct entry *current_element) {
  listEntry->next         = current_element->next;
  current_element->next   = listEntry;
}

int main(void) {
  struct entry n1, n2, n3, n2_3, *listPtr = &n1, *listEntry = &n2_3;
  void         insertEntry(struct entry *listEntry, struct entry *current_element);

  n1.value = 100;
  n1.next  = &n2;

  n2.value = 200;
  n2.next  = &n3;

  n3.value = 300;
  n3.next  = (struct entry *) 0;

  n2_3.value = 250;

  printf("The list before insertEntry is: \n");
  while (listPtr != (struct entry *) 0) {
    printf("%i\n", listPtr->value);
    listPtr = listPtr->next;
  }

  listPtr = &n1;
  insertEntry(listEntry, &n2);

  printf("\nThe list after insertEntry is: \n");
  while (listPtr != (struct entry *) 0) {
    printf("%i\n", listPtr->value);
    listPtr = listPtr->next;
  }

  return 0;
}

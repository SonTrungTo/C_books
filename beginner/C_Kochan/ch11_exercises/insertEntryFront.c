// Exercise 3: Keep insertEntry and construct a special structure to insert a
// new entry to the front of the list.
// Using insertEntry now keeps adding new entry to the front of the linked lists.
#include <stdio.h>

struct entry {
  int          value;
  struct entry *next;
};

void insertEntry(struct entry *listEntry, struct entry *current_element) {
  listEntry->next       = current_element->next;
  current_element->next = listEntry;
}

int main(void) {
  void          insertEntry(struct entry *listEntry, struct entry *current_element);
  struct entry  invisibleList;
  struct entry  n1, n2, n3, n2_3, *listPtr;

  invisibleList.next = &n1;
  listPtr            = invisibleList.next; // This is the normal case.

  n1.value = 100;
  n1.next  = &n2;

  n2.value = 200;
  n2.next  = &n3;

  n3.value = 300;
  n3.next  = (struct entry *) 0;

  n2_3.value = 250;

  printf("The list before insertEntry is used:\n");
  while (listPtr != (struct entry *) 0) {
    printf("%i\n", listPtr->value);
    listPtr = listPtr->next;
  }

  insertEntry(&n2_3, &invisibleList); // After this, invisibleList.next points to the new structure.
  listPtr = invisibleList.next;       // This sequence needs to be repeated if more entries are to be added.

  printf("\nThe list after insertEntry is used:\n");
  while (listPtr != (struct entry *) 0) {
    printf("%i\n", listPtr->value);
    listPtr = listPtr->next;
  }

  return 0;
}

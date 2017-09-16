/**
*   Example 11.10: Function to return a pointer.
* findEntry searches through the linked lists and returns a pointer if the value
* is available and a null pointer otherwise.
*/
#include <stdio.h>

struct entry {
  int          value;
  struct entry *next;
};

struct entry *findEntry(struct entry *list_pointer, int match) {
  while (list_pointer != (struct entry *) 0) {
    if (list_pointer->value == match)
      return list_pointer;
    else
      list_pointer = list_pointer->next;
  }

  return (struct entry *) 0;
}

int main(void) {
  struct entry  *findEntry(struct entry *list_pointer, int match);
  struct entry  n1, n2, n3, *list_pointer = &n1, *entryPtr;
  int           number;

  n1.value = 100;
  n1.next  = &n2;

  n2.value = 200;
  n2.next  = &n3;

  n3.value = 300;
  n3.next  = (struct entry *) 0;

  printf("Please enter a value: ");
  scanf("%i", &number);

  entryPtr = findEntry(list_pointer,number);
  if (entryPtr != (struct entry *) 0)
    printf("Found %i.\n", entryPtr->value);
  else
    printf("Not found.\n");

  return 0;
}

// This can be used to replace the lookup function and search in dictionary
// by using linked lists: easy inserting and removing new entries, but the binary
// search algorithm is inapplicable.

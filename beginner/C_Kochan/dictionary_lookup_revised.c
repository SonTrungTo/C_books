/**
*   Dictionary look up uses the binary search method.
*   Binary search algorithm: You are looking for an element x inside an array M,
* which contains n elements. The algorithm assumes that M IS SORTED IN ASCENDING ORDER.
* Step 1: Set low to 0, high to n - 1
* Step 2: If low > high, x does not exist in M and the algorithm terminates
* Step 3: mid = (low + high) / 2
* Step 4: If M[mid] < x, low = mid + 1 and return to step 2
* Step 5: If M[mid] > x, high = mid - 1 and return to step 2
* Step 6: If M[mid] = x, the algorithm terminates
*/
#include <stdio.h>

struct entry {
  char  word[15];
  char  definition[50];
};

// compareStrings() returns -1 if s1 < s2, 0 if s1 == s2 and 1 if s1 > s2, lexicographically.
int compareStrings(const char s1[], const char s2[]) {
  int   i = 0;

  while (s1[i] == s2[i] && s1[i] && s2[i])
    ++i;

  if (s1[i] < s2[i])
    return -1;
  else if (s1[i] > s2[i])
    return 1;
  else
    return 0;
}

// The lookup uses the binary search algorithm, with the support of compareStrings();
int lookup(const struct entry dictionary[], const char search[],
           const int entries) {
  int      compareStrings(const char s1[], const char s2[]);
  int      compareValue, low = 0, high = entries - 1, mid;

  while (low <= high) {
    mid = (low + high) / 2;
    compareValue = compareStrings(dictionary[mid].word, search);

    if (compareValue == -1)
      low  = mid + 1;
    else if (compareValue == 1)
      high = mid - 1;
    else
      return mid; // Word found!
  }

  return -1; // Word not existed in dictionary.
}

// The main program is taken from dictionary_lookup.c with little modification!
int main(void) {
  const struct entry dictionary[100] = {
    {"aardvark", "a burrowing African mammal"       },
    {"abyss",    "a bottomless pit"                 },
    {"acumen",   "mentally sharp; keen"             },
    {"addle",    "to become confused"               },
    {"aerie",    "a high nest"                      },
    {"affix",    "to append; attach"                },
    {"agar",     "a jelly made from seaweed"        },
    {"ahoy",     "a nautical call of greeting"      },
    {"aigrette", "an ornamental cluster of feathers"},
    {"ajar",     "partially opened"}
  }; // Note that this is ascending order lexicographically.

  int  entry;
  int  entries = 10;
  char word[15];
  int  lookup(const struct entry dictionary[], const char search[],
              const int entries);

  printf("Enter your search: ");
  scanf("%14s", word);
  entry = lookup(dictionary, word, entries);

  if (entry != -1)
    printf("%s\n", dictionary[entry].definition);
  else
    printf("The word \"%s\" is not found in the database\n", word);

  return 0;
}

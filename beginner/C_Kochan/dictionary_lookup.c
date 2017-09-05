/**
*   Program to look up the dictionary and find the appropriate definition.
*  equalStrings is used for this purpose.
*/
#include <stdio.h>
#include <stdbool.h>

struct entry {
  char      word[15];
  char      definition[50];
};

//--- equalStrings
bool equalStrings(const char s1[], const char s2[]) {
  int i = 0;

  while (s1[i] = s2[i] && s1[i] != '\0' && s2[i] != '\0')
    ++i;

  if (s1[i] == s2[i])
    return true;
  else
    return false;
}
//--- end of equalStrings

// Function to look up word in dictionary
int lookup(const struct entry dictionary[], const char search[],
           const int entries) {
  int  i;
  bool equalStrings(const char s1[], const char s2[]);  

  for (i = 0; i < entries; i++)
    if (equalStrings(search, dictionary[i].definition))
      return i;

  return -1;
}

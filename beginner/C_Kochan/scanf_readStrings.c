/**
*  Reading strings with scanf
*/
#include <stdio.h>

int main(void) {
  char  s1[81], s2[81], s3[81];

  scanf("%s%s%s", s1, s2, s3); // scanf("%80s%80s%80s",s1,s2,s3); can be used to delimit maximum char, not %81s though!
  printf("\ns1 = %s \ns2 = %s \ns3 = %s\n", s1, s2, s3);

  return 0;
}

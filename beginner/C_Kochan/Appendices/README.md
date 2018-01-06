# Summary
***
* Appendix A, B and C are about summarizing features of C, listing
all common libraries and enumarating all commons commands of gcc,
respectively.
* Appendix D is about 15 common mistakes in programming C:
 1. Misplacing a semiconlon.
 ```c
 if (j == 100);
   j = 0;
 ```
 2. Confusing the operator _=_ with the operator _==_  .
 ```c
 if (a = 2)
   printf("Your turn.\n");
 ```
 3. Omiting prototype declarations.
 ```c
 result = squareRoot(2);
 ```
 4. Confusing precedences of the various operators.
 ```c
 while (c = getchar() != EOF)
   ...
  if(x & 0xF == y)
   ...
 ```
 5. Confusing a character constant with a character string.
 ```c
 text = 'a';
 // is not
 text = "a";
 ```
 6. Using wrong bounds for an array.
 ```c
 int a[100], i, sum = 0;
 ...
 for (i = 1; i <= 100; i++) {
   sum += a[i];
 }
 ```
 7. Forgetting to reserve an extra location in an array for the terminating null character of a string.
 8. Confusing the operator `->` with the operator `.` when
 referencing structural members.
 9. Omiting the ampersand _before nonpointers variables_ in a scanf call
 ```c
 int number;
 ...
 scanf("%i", number);
 ```
 10. Using a pointer before it's initialized!
 ```c
 char *char_pointer;
 *char_pointer = 'X';
 ```
 11. Omiting the _break_ statement at the end of a case in
 a _switch_ statement.
 12. Inserting a _semicolon_ at the end of a macro definition.
 ```c
 #define END_OF_DATA 999;
 ...
 if(value == END_OF_DATA)
 ...
 // is then
 if(value == 999;)
 ...
 // which is wrong.
 ```
 13. Omiting parentheses around arguments in macro definitions.
 ```c
 #define reciprocal(x) 1/x
 ...
 w = reciprocal(a+b);
 // which is then
 w = 1 / a + b;
 ```
 14. Leaving a blank space between the name of a macro and
 its argument list in the `#define` statement.
 ```c
 #define MIN (a,b) ((a) < (b) ? (a) : (b))
 minVal = MIN (val1, val2);
 // is then
 minVal = (a,b) ((a) < (b) ? (a) : (b)) (val1, val2);
 ```
 15. Using an expression that has side effects in a
 macro call.
 ```c
 #define SUM(x) (x)+(x)
 ...
 total = SUM(++v);
 // which means
 total = (++v) + (++v);
 // v is incremented TWICE!
 ```
* Finally, Appendix E lists some valuable resources:
  * The C programming language:
    1. _The C programming language_- Brian, Ritchie, 1988.
    2. _C: A reference manual_, 5th Ed.- Samuel, Steele, 2002.
    3. _The standard C library_-Plauger, 1992.
  * Object-Oriented Programming
    1. _The introduction to Object-Oriented Programming_, 3rd
    Edition- Budd Timonthy, 2001.
  * The C++
    1. _C++ Primer Plus_, 4th Ed, Stephen Prata, 2001.
    2. _The C++ Programming language_, 3rd Edition, Stroustrup, 2000.
  * The C#
    1. _Programming in the key of C#_, Petzold Charles, 2003.
    2. _Programming in C#_, 3rd Ed, Liberty Jesse, 2003.
  * The Objective-C Language
    1. _Programming in Objective-C_, Kochan Stephen, 2004.
    2. _The Objective-C Programming Language_, Apple Computer, 2004.

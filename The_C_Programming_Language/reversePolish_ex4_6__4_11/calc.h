#define   NUMBER    '0' /* a signal that a number was found */
#define   NAME      'n' /* a signal that a name was found */

/* only declarations */
int    getop(char []);
void   push(double);
double pop(void);
void   clear(void);
void   mathfunc(char []);
int    getLine(char [], int);      /* alternative approach to getch and ungetch */
int    getch(void);
void   ungetch(int);

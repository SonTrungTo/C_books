#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

enum outcome  { win, lose };

typedef   enum outcome  outcome;

void      report_and_tabulate(outcome result, int *bet_ptr, int *gain_ptr,
                             int *lost_ptr, int *net_gain_ptr);
outcome   compare(int player_choice, int roulette_choice);
int       roulette_choice(void);
int       player_choice(void);

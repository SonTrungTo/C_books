#include <ctype.h>    /* isspace() */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

enum p_r_s      { paper, rock, scissors,
                game, help, instructions, quit };
enum outcome    { win, lose, tie, error };

typedef   enum p_r_s    p_r_s;
typedef   enum outcome  outcome;

outcome   compare(p_r_s  player_choice,
         p_r_s  machine_choice);
void      prn_final_status(int win_cnt, int lose_cnt);
void      prn_game_status(int win_cnt, int lose_cnt, int tie_cnt);
void      prn_help(void);
void      prn_instructions(void);
void      report_and_tabulate(outcome result,
          int *win_cnt_ptr, int *lose_cnt_ptr, int *tie_cnt_ptr);
p_r_s     selection_by_player(void);
p_r_s     selection_by_machine(void);

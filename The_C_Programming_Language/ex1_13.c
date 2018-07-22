#include <stdio.h>

#define       OUT								  0
#define				IN									1
#define				MAX_LENGTH					20 /* Maximum character length */
#define				MAX_HIST						64 /* Maximum length of the histogram */

int main(void) {
	int		 c, state, i, length;
	int		 max_words;					/* max length of all words, used for scaling */
	int		 wl[MAX_LENGTH];		/* word length counter */
	int		 wc;								/* the length of a word */
	int		 overflow;					/* overflow counter */

	for (i = 0; i < MAX_LENGTH; i++)
		wl[i] = 0;

	max_words = 0;
	overflow = 0;
	wc = 0;
	state = OUT;
	while ( (c = getchar()) != EOF ) {
		if (c == ' ' || c == '\t' || c == '\n') {
			state = OUT;
			if (wc > MAX_LENGTH)
				++overflow;
			else if (wc > 0)
				++wl[wc];
			wc = 0;
		}
		else if (state == OUT ) {
			state = IN;
			wc = 1;
		}
		else
			++wc;
	}

	for (i = 1; i < MAX_LENGTH; i++)
		if (max_words < wl[i])
			max_words = wl[i];

	for (i = 1; i < MAX_LENGTH; i++) {
		if (wl[i] != 0) {
			printf("%5d -- %5d  ", i, wl[i]);
			if ( (length = wl[i] * MAX_HIST / max_words) < 1 )
				length = 1;
			while (length-- > 0)
				printf("*");
			putchar('\n');
		}
	}

	if (overflow > 0)
		printf("There are %d overflown words that are greater than %d\n", overflow, MAX_LENGTH );

	return 0;
}

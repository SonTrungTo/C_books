#include <stdio.h>

#define			IN			1
#define			OUT			0

int main(void) {
	int		 c, state;

	state = IN;
	while ( (c = getchar()) != EOF ) {
		if (c == ' ' || c == '\t' || c == '\n')
			state = OUT;
		else {
			if (state == OUT) { /* Avoid multiples newlines */
				putchar('\n');
				state = IN;
			}
			putchar(c);
		}
	}
	putchar('\n');

	return 0;
}

#include <stdio.h>

#define		IN			1
#define   OUT			0

int main(void) {
	int		 c, nl, nc, nw, state;

	state = OUT;
	nl = nc = nw = 0;
	while ( (c = getchar()) != EOF ) {
		++nc;
		if (c == '\n')
			++nl;
		if (c == ' ' || c == '\t' || c == '\n')
			state = OUT;
		else if (state == OUT) {
			state = IN;
			++nw;
		}
	}

	printf("Lines:%d  Words:%d  Characters:%d\n", nl, nw, nc);

	return 0;
}

#include <stdio.h>

#define       OUT			0
#define				IN			1
#define				N				64

int main(void) {
	int		 c, wl[N], wn, status, i;

	for (i = 0; i < N; i++)
		wl[i] = 0;

	status = OUT;
	wn = -1;
	while ( (c = getchar()) != EOF ) {
		if (c == ' ' || c == '\t' || c == '\n')
			status = OUT;
		else {
			if (status == OUT) {
				++wn;
				status = IN;
			}
			++wl[wn];
		}
	}

	for (i = 0; i < wn + 1; i++) {
		printf("wl[%i]: %d\n", i, wl[i]);
	}

	return 0;
}

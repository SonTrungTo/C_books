#include <stdio.h>

int main(void) {
	int		nb, c;

	nb = 0;
	while ((c = getchar()) != EOF) {
		if (c == ' ') {
			++nb;
			if (nb == 1)
				putchar(c);
		}
		else {
			nb = 0;
			putchar(c);
		}
	}

	return 0;
}

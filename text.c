#include <stdio.h>

#define IN 1 /* внутри слова */
#define OUT 0 /* вне слова */

/* подсчет строк, слов и символов */

void main () {
	int c, nl, nw, nc, state;
	state = OUT;
	nl = nw = nc = 0;
	while ((c = getchar()) != EOF) {
		++nc;
		if (c == '\n' )
			++nl;
		if (c == ' ' || c == '\n' || c == '\t')
			state = OUT;
		else if (state == OUT) {
			state = IN;
			++nw;
		}
	}
	printf ("Lines: %d, Words: %d, Symbols: %d\n", nl, nw, nc);
}

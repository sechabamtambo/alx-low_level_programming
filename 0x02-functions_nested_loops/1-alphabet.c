#include "main.h"

void print_alphabet(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
		-putchar(alpha);
	_putchar('\n');
}

#include <main.h>

/**
 * print_alphabet - prints alphabet in lowercase followed by newline
 */

void print_alphabet(void)
{
	char lower;

	for (lower = 'a'; lower <= 'z', lower++)
		_putchar(lower);

	_putchar('\n');
}

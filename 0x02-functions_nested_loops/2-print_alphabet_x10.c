#include "main.h"

/**
 * print_alphabet_x10 - print lowercase alphabet,
 * 10 times followed by newline
 */

void print_alphabet_x10(void)
{
	char lower;
	int i;

	for (i = 0; i <= 9; i++)
	{
		for (lower = 'a'; lower <= 'z'; lower++)
		{
			_putchar(lower);
		}
		_putchar('\n');
	}
}

#include "main.h"

/**
 * print_line - draws a straing line in terminal
 * @n: number of times '_' is printed
 */

void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	while (n > 0)
	{
		_putchar('_');
		n--;
	}

	_putchar('\n');
}

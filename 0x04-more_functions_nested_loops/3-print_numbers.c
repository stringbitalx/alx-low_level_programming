#include "main.h"

/**
 * print_numbers - prints numbers 0-9 followed by newline
 */

void print_numbers(void)
{
	int i;

		for (i = 0; i <= 9; i++)
			_putchar(i + '0');

	_putchar("\n");
	return (0);
}

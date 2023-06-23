#include "main.h"

/**
 * print_square - draws a square on terminal using '#'
 * @size: The square's size
 */

void print_square(int size)
{
	int l, w;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (l = 0; l < size; l++)
	{
		for (w = 0; w < size; w++)
			_putchar('#');
		_putchar('\n');
	}
}

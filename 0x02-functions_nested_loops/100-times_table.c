#include "main.h"

/**
 * print_times_table - prints "n" times table
 * @n: size of table
 * Return: 0 Always
 */

void print_times_table(int n)
{
	int column, row, multiple;

	if (n > 15 || n < 0)
		return;

	for (column = 0; column <= n; column++)
	{
		for (row = 0; row <= n; row++)
		{
			multiple = row * column;
			_putchar(multiple + '0')
		}

		_putchar("\n");
	}
}

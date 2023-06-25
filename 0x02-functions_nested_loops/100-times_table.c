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
			if (multiple <= 9)
			{
				_putchar(multiple + '0');
				if (row != n)
				{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(' ');
				}
			}
			else if (multiple > 9 && multiple <= 99)
			{
				_putchar((multiple / 10) + '0');
				_putchar((multiple % 10) + '0');
				if (row != n)
				{
				_putchar(',');
                                _putchar(' ');
				_putchar(' ');
				}
			}
			else if (multiple > 99)
			{
				_putchar((multiple / 100) + '0');
				_putchar(((multiple / 10) %10) + '0');
				_putchar((multiple % 10) + '0');
				if (row != n)
				{
				_putchar(',');
                                _putchar(' ');
				}
			}
		}

		_putchar('\n');
	}
}

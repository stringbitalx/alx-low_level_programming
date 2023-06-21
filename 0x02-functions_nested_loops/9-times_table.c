#include "main.h"

/**
 * times_table - prints 9 times table starting with 0.
 */

void times_table(void)
{
	int digit, multiple, product;

	for (digit = 0; digit <= 9; digit++)
	{
		_putchar('0');

		for (multiple = 1; multiple <= 9; multiple++)
		{
			_putchar(',');
			_putchar(' ');

			product = digit * multiple;

			if (product <= 9)
				_putchar(' ');
			else
				_putchar((product / 10) + '0');

			_putchar((prod % 10) + '0');
		}
		_putchar('\n');
	}
}

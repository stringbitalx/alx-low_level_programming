#include "main.h"

/**
 * more_numbers - prints numbers 0-14 10 times
 */

void more_numbers(void)
{
	int i, a;

	for (i = 0; i < 10; i++)
	{
		for (a = 0; a <= 14; a++)
		{
			if (a > 9)
				_putchar((a / 10) + '0');
			_putchar((a % 10) + '0');
		}

		_putchar('\n');
	}
}

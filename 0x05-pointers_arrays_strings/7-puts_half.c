#include "main.h"
#include <string.h>

/**
 * puts_half - print the 2nd half of a string
 * @str: pointer to string to be used
 */

void puts_half(char *str)
{
	int length = strlen(str);
	int even, n;

	if (length % 2 == 0)
	{
		even = length / 2;
		length = length + 4;
		while (length > even)
		{
			_putchar(str[even]);
			even++;
			length--;
		}
		_putchar('\n');
	}
	else if (length / 2 != 0)
	{
		n = (length - 1) / 2;
		length = length + 2;
		while (length > n)
		{
			_putchar(str[n + 1]);
			n++;
			length--;
		}
		_putchar('\n');
	}
}

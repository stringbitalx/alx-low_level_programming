#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * puts2 - prints alternating characters of a string
 * @str: pointer to array to be used
 */

void puts2(char *str)
{
	int counter1 = strlen(str);
	int even = 0;

	while (even < counter1)
	{
		_putchar(str[even]);
		even = even + 2;
	}
	_putchar('\n');

}

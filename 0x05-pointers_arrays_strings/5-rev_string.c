#include "main.h"

/**
 * rev_string - reverse a string
 * @s: pointer to character array to be used
 */

void rev_string(char *s)
{
	int length = 0;
	int i;

	while (*s != '\0')
	{
		length ++;
		s++;
	}
	s--;
	char str[length];
	for (i = length; i > 0; i--)
	{
		str[i] = _putchar(*s);
		s--;
	}
	_putchar('\n');
}

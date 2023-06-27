#include "main.h"
#include <string.h>

/**
 * print_rev - prints a string in reverse
 * @s: pointer to be used
 */

char str2[100];

void print_rev(char *s)
{
	int length = strlen(s);

	for (int i = length - 1; i >= 0; i--)
		str2[length -i - 1] = s[i];
	str2[length] = '\0';
	_puts(str2);
}

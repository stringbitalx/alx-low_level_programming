#include "main.h"

/**
 * string_toupper - changes lowercase letters to uppercase
 * @n: pointer to string to be used
 * Return: n
 */

char *string_toupper(char *n)
{
	int i = 0;

	while (n[i] != '\0')
	{
		if (n[i] >= 'a' && n[i] <= 'z')
			n[i] -= 32;
		i++;
	}
	return (n);
}

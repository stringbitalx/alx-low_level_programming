#include "main.h"
#include <string.h>

/**
 * _strlen_recursion - prints the length of a string
 * @s: pointer to string to be used
 * Return: size
 */

int _strlen_recursion(char *s)
{
	int n = 0;

	if (*s)
	{
		n++;
		n += _strlen_recursion(s + 1);
	}
	return (n);
}

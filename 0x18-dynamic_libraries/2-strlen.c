#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string pointer to be used
 * Return: 0 Success
 */

int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}

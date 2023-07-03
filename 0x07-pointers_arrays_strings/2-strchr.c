#include "main.h"
#include <string.h>

/**
 * _strchr - locates a character in a string
 * @s: pointer to string to be used
 * @c: character to be located in string
 * Return: Pointer to 1st occurrence of char in string 0
 *		otherwise NULL
 */

char *_strchr(char *s, char c)
{
	int size, i;

	size = strlen(s);
	for (i = 0; i < size; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (NULL);
}

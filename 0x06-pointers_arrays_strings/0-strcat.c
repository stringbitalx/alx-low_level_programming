#include "main.h"
#include <string.h>

/**
 * _strncat - concatenates two strings
 * @src: string to be concatenated from
 * @dest: string to be concatenated to
 * Return: pointer to resulting string dest.
 */

char *_strcat(char *dest, char *src)
{
	int i = strlen(dest);
	int n = 0;
	char *_strcat;

	while (*src != '\0')
	{
		dest[i++] = *src++;
	}
	_strcat = dest;
	return (_strcat);
}

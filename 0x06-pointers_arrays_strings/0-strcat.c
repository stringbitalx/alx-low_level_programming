#include "main.h"
#include <string.h>

/**
 * _strcat - concatenates two strings
 * @src: string to be concatenated from
 * @dest: string to be concatenated to
 * Return: pointer to resulting string dest.
 */

char *_strcat(char *dest, char *src)
{
	int i = strlen(dest);
	char *_strcat;

	while (*src != '\0')
	{
		dest[i++] = *src++;
	}
	_strcat = dest;
	return (_strcat);
}

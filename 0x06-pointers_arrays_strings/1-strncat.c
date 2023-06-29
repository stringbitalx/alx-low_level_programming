#include "main.h"
#include <string.h>

/**
 * _strncat - concatenates two strings
 * @src: string to be concatenated from
 * @dest: string to be concatenated to
 * @n: bytes to be used from source
 * Return: pointer to resulting string dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = strlen(dest);
	char *_strncat;
	int a = 0;

	while (*src != '\0' && a < n)
	{
		dest[i++] = *src++;
		a++;
	}
	_strncat = dest;
	return (_strncat);
}

#include "main.h"

/**
 * _memcpy - copies memory area
 * @src: memory area copied from
 * @dest: memory area copied to
 * return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	char *ptr;

	i = 0;
	ptr = dest;

	while (i < n)
	{
		*dest++ = src[i++];
	}
	return (ptr);
}

#include "main.h"

/**
 * _memset - fills memory with a constant byte type
 * @s: pointer to character array to be filled
 * @b: character used to fill
 * @n: first bytes of the character array pointed
 * Return: A pointer to the memory areas
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;

	while (i < n)
	{
		*s = b;
		i++;
		s++;
	}
	return (s);
}

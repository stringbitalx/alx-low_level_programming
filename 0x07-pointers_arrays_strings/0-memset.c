#include "main.h"

/**
 * _memset - fillls memory with a constant byte type 
 * @s: pointer to character array to be filled 
 * @b: character used to fill 
 * @: first bytes of the character array pointed
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

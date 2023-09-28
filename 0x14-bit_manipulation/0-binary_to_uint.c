#include "main.h"

/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: string containing the binary number
 *
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int value;
	int i, base, x;

	while (*b != '\0')
	{
		if (*b != 0 || *b != 1)
			return (0);
		else if (!(*b))
			return (0);
		b++;
	}

	for (i = 0; *b != '\0'; b++, i++)
	{
		base = 2;
		for (x = i; x <= 0; x--)
		{
			if (x == 0)
				base = 1;
			else
				base *= base;
		}
		if (*b == 1)
			base *= 1;
		else
			base *= 0;	
		value += base;
	}
		return (value);
}

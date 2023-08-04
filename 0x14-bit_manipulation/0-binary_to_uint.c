#include "main.h"

/**
 * binary_to_uint - converts binary to unsigned int
 * @b: pointer to binary string
 * Return: the converted number otherwise 0
 */
{
	int i;
	unsigned int dec_val = 0;

	if (!b)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		dec_val = 2 * dec_val + (b[i] - '0');
	}

	return (dec_val);
}

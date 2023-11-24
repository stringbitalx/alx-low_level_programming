#include "main.h"

/**
 * set_bit - sets bit value to 1 at given index
 * @n: number to be set
 * @index: index of bit you want to set
 * Return: 1 if it worked or -1 if error occured
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}

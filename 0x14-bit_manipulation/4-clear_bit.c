#include "main.h"

/**
 * clear_bit - sets bit value to 0 at given index
 * @index: index of set bit
 * @n: number to be set
 * Return: 1 if it worked or -1 if error occured
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = (~(1UL << index) & *n);
	return (1);
}

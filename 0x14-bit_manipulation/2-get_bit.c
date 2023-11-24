#include "main.h"

/**
 * get_bit - returns bit value at given index
 * @ibdex: the index
 * @n: bit to be used
 * Return: value of bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val;

	if (index > 63)
		return (-1);

	bit_val = (n >> index) & 1;

	return (bit_val);
}

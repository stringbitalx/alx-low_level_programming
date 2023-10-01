#include "main.h"

/**
 * get_bit - returns bit value at given index
 *
 * @n: number used
 * @index: index used
 * Return: get_value
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int get_value;

	if (index > 63)
		return (-1);
	get_value = (n >> index) & 1;
	return (get_value);
}

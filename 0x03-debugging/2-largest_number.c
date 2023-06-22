#include "main.h"
#include <stdio.h>

/**
 * largest_number - prints largest number
 *
 * @a: first number
 * @b: second number
 * @c: third number
 *
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
	if (a == b && b == c)
	{
		return -1;
	}

	int largest = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);
	return (largest);
}

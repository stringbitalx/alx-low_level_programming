#include "main.h"
#include <stdio.h>

/**
 * print_sign - prints the sign of a number.
 * @n: The number to be printed.
 *
 * Return: 1 if n is greater than zero,
 * -1 if n is less than zero,
 * 0 if n is zero.
 */

int find_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}

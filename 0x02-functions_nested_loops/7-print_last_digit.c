#include "main.h"

/**
 * print_last_digit - prints the last digit of a number.
 * @n: the number to be printed.
 *
 * Return: the value of the last digit.
 */

int print_last_digit(int)
{
	int number;

	number = n % 10;

	if (number < 0)
		number = -number;

	_putchar(number + '0');
	return (number);
}

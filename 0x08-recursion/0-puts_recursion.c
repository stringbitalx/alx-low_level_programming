#include "main.h"

/**
 * _puts_recursion - prints a string then newline
 * @s: pointer to string to be printed
 * Return: 0 always (Success)
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}

	else
		_putchar('\n');
}

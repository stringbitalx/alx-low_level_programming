#include "main.h"

/**
 * _isdigit - checks for digits 0-9
 * @c: character to be chcked
 * Return: 1 if digit 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
		return (1);
	else
		return (0);
}

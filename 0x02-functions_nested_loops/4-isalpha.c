#include "main.h"

/**
 * _islower - checks for alphabetic characters.
 * @c: The character to be checked.
 *
 * Return: 1 if c is alphabet, 0 otherwise.
 */

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}

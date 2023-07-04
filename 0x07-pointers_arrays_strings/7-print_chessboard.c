#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

#include "main.h"

/**
 * print_chessboard - prints the chess board
 * @a[8]: pointer to 8th row 2d array a.
 * Return: 0 Success
 */

void print_chessboard(char (*a)[8])
{
	int r, c;

	for (r = 0; r < 8; r++)
	{
		for  (c = 0; c < 8; c++)
			_putchar(a[r][c]);
		_putchar('\n');
	}
}

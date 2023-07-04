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

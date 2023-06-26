#include "main.h"

/**
 * swap_int - swaps the values of tro integers
 * @a: integer to be swapped with
 * @b: integer to be swapped with
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}

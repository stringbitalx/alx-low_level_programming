#include "main.h"

/**
 * reverse_array - reverse the the contents of an integer array
 * @a: pointer to integer array to be used
 * @n: number of elements of array to be used
 */

void reverse_array(int *a, int n)
{

	int *start = a;
	int *end = a + n - 1;

	while (start < end)
	{
		int temp = *start;
		*start = *end;
		*end = temp;

		start++;
		end--;
	}
}

#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a @D array
 * @grid: width of array
 * @height: height of array
 * Return: 0 Always (Success)
 */

void free_grid(int **grid, int height)
{
	int r;

	for (r = 0; r < height; r++)
		free(grid[r]);
	free(grid);
}

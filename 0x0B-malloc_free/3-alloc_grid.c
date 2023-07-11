#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - allocates a 2D integer array
 * @width: number of rows
 * @height: number of columns
 * Return: pointer to 2D array otherwise NULL
 */

int **alloc_grid(int width, int height)
{
	int **array;
	int r, c;

	if (width < 0 ||
		width == 0 ||
		height < 0 ||
		height == 0)
		return (NULL);
	array = malloc(sizeof(int *) * height);
	if (array == NULL)
	{
		free(array);
		return (NULL);
	}
	for (c = 0; c < height; c++)
	{
		array[c] = malloc(sizeof(int) * width);
		if (array[c] == NULL)
		{
			free(array[c]);
			return (NULL);
		}
	}
	c = 0;

	while (c < height)
	{
		for (r = 0; r < width; r++)
		{
			array[c][r] = 0;
		}
		c++;
	}
	return (array);
}

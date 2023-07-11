#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars
 * @size: size of array to be created
 * @c: charcter to be initailized with
 * Return: pointer to array (Success) otherwise NULL
 */

char *create_array(unsigned int size, char c)
{
	char *create_array;
	unsigned int i;
	
	if (!(size))
		return (NULL);
	else if (size)
	{
		create_array = malloc(sizeof(char) * size);
		for (i = 0; i < size; i++)
			create_array[i] = c;
		return (create_array);
	}
	return (NULL);
}

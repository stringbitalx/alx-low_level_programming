#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * _strdup - copies parameter string to new allocated space
 * @str: string to be copied
 * Return: pointer to copy of str allocated memory
 */

char *_strdup(char *str)
{
	int i = 0, r = 0;
	char *string;

	if (str == NULL)
		return (NULL);
	while (str[i] != '\0')
		i++;
	string = malloc(sizeof(char) * (i + 1));
	if (string == NULL)
		return (NULL);
	for (; str[r]; r++)
		string[r] = str[r];
	return (string);
}

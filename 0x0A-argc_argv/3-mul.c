#include <stdio.h>
#include "main.h"

/**
 * main - multiplies two numbers
 * @argc: argument counter
 * @argv: argument vector
 * Return: 0 success 1 otherwise
 */

int main(int argc, char **argv)
{
	int product, i;

	i = 1;
	if (argc > 1)
	{
		product = _atoi(argv[i]) * _atoi(argv[i += 1]);
		printf("%d\n", product);
	}
	return (0);
}

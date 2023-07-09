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
	int product;

	if (argc > 1)
	{
		product = _atoi(argv[1]) * _atoi(argv[2]);
		printf("%d\n", product);
	}
	else
	{
		printf ("error\n");
		return (1);
	}
	return (0);
}

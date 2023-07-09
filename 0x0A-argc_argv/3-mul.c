#include <stdio.h>
#include <stdlib.h>
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
			product = atoi(argv[i]) * atoi(argv[i += 1]);
			printf("%d\n", product);
	}
	else
	{
		printf("error\n");
		return (1);
	}
	return (0);
}

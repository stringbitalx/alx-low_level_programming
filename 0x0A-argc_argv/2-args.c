#include <stdio.h>
#include "main.h"

/**
 * main - prints all arguments it receives
 * @argc: argument counter
 * @argv: argument vector
 * Return: 0 Always (Success)
 */

int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}

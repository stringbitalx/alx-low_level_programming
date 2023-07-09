#include <stdio.h>
#include "main.h"

/**
 * main - prints program name
 * @argc: argument counter
 * @argv: argument vector
 * Return: 0 Always (Success)
 */

int main(int argc, char **argv __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}

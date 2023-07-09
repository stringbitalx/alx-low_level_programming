#include <stdio.h>
#include "main.h"

/**
 * main - prints program name
 * @argc: argument counter
 * @argv: argument vector
 * Return: 0 Always (Success)
 */

int main(int argc __attribute__((unused)), char **argv)
{
	printf("%s\n", *argv);
	return (0);
}

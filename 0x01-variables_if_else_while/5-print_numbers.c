#include <stdlib.h>
#include <stdio.h>
#include<time.h>

/**
 * main - print all single digits 0-9
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int a;

	for (a = 0; a < 10; a++)
	{
		printf("%d", a);
	}

	putchar('\n');
	return (0);
}

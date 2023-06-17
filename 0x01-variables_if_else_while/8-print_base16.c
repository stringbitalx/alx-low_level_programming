#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main  - printhexadecimal numbers in lowercas
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int a;

	for (a = 48; a < 58; a++)
	{
		putchar(a);
	}
	
	for (a = 97; a < 103, a++)
	{
		putchar(a);
	}

	putchar('\n');
	return (0);
}

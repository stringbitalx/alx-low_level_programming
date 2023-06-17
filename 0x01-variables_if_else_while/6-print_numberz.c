#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - print 0-9
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

	putchar('\n');
	return (0);
}

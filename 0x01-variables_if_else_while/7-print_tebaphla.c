#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - prints lowercase letters in reverse
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char ch;

	for (ch = 'z'; ch > 'a'; ch --)
	{
		putchar(ch);
	}

	purchar('\n');
	return (0);
}

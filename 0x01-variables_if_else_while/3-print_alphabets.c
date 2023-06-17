#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - prints lowercase then uppercase letters
 *
 * Return: Always 0 (Success)
 */

int main (void)
{
	char lower[26] = "abcdefghijklmnopqrstuvwxyz";
	char upper[26] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;
	int a;

	for (i = 0; i < 26; i++)
	{
		putchar(lower[i]);
	}

	for(a = 0; a < 26; a++)
	{
		putchar(upper[a]);
	}

	putchar('\n');
	return (0);
}

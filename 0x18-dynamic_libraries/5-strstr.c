#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: source string containing substring
 * @needle: substring to be located in source
 * Return: pointer to beginning to the located substring
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *h = haystack;
		char *n = needle;

		while (*h == *n && *n != '\0')
		{
			h++;
			n++;
		}
		if (*n == '\0')
			return (haystack);
	}
	return (0);
}

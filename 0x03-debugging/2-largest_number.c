#include "main.h"
#include <stdio.h>

/**
 * largest_number - prints largest number
 *
 * @a: first number
 * @b: second number
 * @c: third number
 *
 * Return: largest number
 */

int largest_number(int a, int b, int c,)
{
int largest;
if (a > b && a > c)
{
largest = a;
}
else if (a > b && c > a)
{
largest = c;
}
else if (b > c)
{
largest = b;
}
else
{
largest = c;
}
return (largest);
}

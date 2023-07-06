#include "main.h"

int actual_prime(int n, int i);

/**
 * is_prime_number - checks if input integer is a prime number
 * @n: input integer
 * Return: 1 (Success)
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_prime(n, n - 1));
}

/**
 * actual_prime - checks if a number is prime recursively
 * @n: number to evaluate
 * @i: counter variable
 * Return: 1 if n is prime, 0 if not
 */

int actual_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 1)
		return (0);
	return (actual_prime(n, i - 1));
}

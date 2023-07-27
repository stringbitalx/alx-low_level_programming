#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - return the sum of all it's parameters
 * @n: the number of parammeters passed to the function
 * @...: a varying number of parameters to sum up
 * Return: if n == 0 - 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, sum = 0;

	va_start(ap, n);

	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);
	va_end(ap);
	return (sum);
}

#include <stdio.h>

/**
 * main - prints numbers 0-100,
 * 	divisibles of 3 is Fizz,
 * 	divisibles of 5 is Buzz,
 * 	divisibles of both 3 and 5 is FizzBuzz.
 * @num: digit to be printed
 */

void main(num)
{
	for (num = 1; num <= 100; num++)
	{
		if (num % 3 == 0)
			printf("Fizz ");
		else if (num % 5 == 0)
			printf("Buzz ");
		else if (num % 3 == 0 && num % 5 == 0)
			printf("FizzBuzz ");
		else
			printf("%d ", num);
	}
	return;
}

#include <stdio.h>

/**
 * is_prime_number - checks if a number is a prime number
 * @n: the integer to check
 *
 * Return: 1 if the number is prime but 0 otherwise
 */

int is_prime_number(int n)
{
	int i;

	if (n <= 1)
	{
		return (0);
	}

	for (i = 2; i * i <= n; i++)
	{
		if (n % i == 0)
			return (0);
	}

	return (1);
}

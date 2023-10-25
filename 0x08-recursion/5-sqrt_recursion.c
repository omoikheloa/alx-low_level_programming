#include "main.h"

/**
 * power_operation - Finds the square root recursively
 * @n: The number to find the square root of
 * @c: The current guess for the square root
 *
 * Return: The square root or -1 if it doesn't exist
 */
int power_operation(int n, int c)
{
	if (c * c == n)
		return (c);
	if (c * c > n)
		return (-1);

	return (power_operation(n, c + 1));
}

/**
 * _sqrt_recursion - Returns the natural square root of a number
 * @n: The input number
 *
 * Return: The square root or -1 if it doesn't exist
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	if (n == 0 || n == 1)
		return (n);

	return (power_operation(n, 2));
}


#include "main.h"

/**
 * _strt_recursion - returns the natural square root of a number
 * @n: input number
 * @c: square root function
 *
 * Return: square root or -1
 */

int power_operation(int n, int c)
{
	if (c * c == n)
		return (c);
	if (c * c > n)
		return (-1);
	return power_operation(n, c + 1);
}


int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (n);
	}
	else
	{
		return (power_operation(n, 2));
	}
}

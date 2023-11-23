#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip
 * to get from one number to another
 * @n: first number
 * @m: second number
 *
 * Return: number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int r_bit = n ^ m;
	unsigned int count = 0;

	while (r_bit > 0)
	{
		count += r_bit & 1;
		r_bit >>= 1;
	}

	return (count);
}

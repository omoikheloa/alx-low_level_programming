#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: pointer to an unsigned integer
 * @index: index of the bit
 *
 * Return: 1 if it works, or 0 if an error occurs
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 0;

	if (index >= sizeof(unsigned long int) * 8 || !n)
		return (-1);

	mask = 1UL << index;
	*n &= ~mask;

	return (1);
}

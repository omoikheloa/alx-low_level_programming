#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: pointer of an unsigned long integer
 * @index: index of the bit
 *
 * Return: 1 if it works or -1 if an error occurs
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index >= sizeof(unsigned long int) * 8 || !n)
		return (-1);

	mask = 1UL << index;
	*n |= mask;

	return (1);
}

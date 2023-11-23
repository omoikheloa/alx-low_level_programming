#include "main.h"


/**
 * binary_to_uint - converts binary number to unsigned int.
 * @b: binary number
 *
 * Return: unsigned integer
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int op = 0;
	int len, base2;

	if (b == 0)
		return (0);

	for (len = 0; b[len] != '\0'; len++)
		;
	for (len--, base2 = 1; len >= 0; len--, base2 *= 2)
	{
		if (b[len] != '0' && b[len] != '1')
		{
			_putchar('E');
			return (0);
		}

		if (b[len] == '1')
		{
			op += base2;
		}
	}

	return (op);
}

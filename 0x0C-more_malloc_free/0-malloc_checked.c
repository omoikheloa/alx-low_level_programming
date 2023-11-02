#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: size of memory to allocate
 *
 * Return: a pointer to allocated memory, 98 if malloc fails
 */

void *malloc_checked(unsigned int b)
{
	void *trst = malloc(b);

	if (trst == NULL)
	{
		exit(98);
	}

	return (trst);
}

#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers from min to max
 * @min: minimum value
 * @max: maximum value
 *
 * Return: pointer to the newly created array, NULL on failure
 */

int *array_range(int min, int max)
{
	int *alx;
	int i;

	if (min > max)
		return (NULL);

	alx = malloc(sizeof(int) * (max - min + 1));

	if (alx == NULL)
		return (NULL);

	for (i = 0; min <= max; i++, min++)
		alx[i] = min;

	return (alx);
}

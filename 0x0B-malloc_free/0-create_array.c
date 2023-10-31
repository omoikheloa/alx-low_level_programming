#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an arrray of characters
 * @size: the size f the array
 * @c: character that initializes array
 *
 * Return: pointer of an array of characters
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	array = (char *)malloc((size + 1) * sizeof(char));

	if (array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}

	array[size] = '\0';
	return (array);
}

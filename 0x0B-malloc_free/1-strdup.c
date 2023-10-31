#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly assigned memory space.
 * @str: string
 *
 * Return: pointer of an array of characters
 */

char *_strdup(char *str)
{
	char *dup;
	unsigned int length = 0;
	int t;

	if (str == NULL)
		return (NULL);

	while (str[length] != '\0')
	{
		length++;
	}

	dup = (char *)malloc(length + 1);

	if (dup == NULL)
		return (NULL);

	for (t = 0; t <= (int)length; t++)
	{
		dup[t] = str[t];
	}

	return (dup);
}

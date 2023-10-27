#include "main.h"

/**
 * _strlen - calculate length of a string
 *
 * @s: the string to calculate let of
 * Return: length of a string
 */

int _strlen(char *s)
{
	int i;
	int length = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		length++;
	}
	return (length);
}

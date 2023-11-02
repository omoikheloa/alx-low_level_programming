#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - concatenates two strings with a limit
 * on the second string
 * @s1: string one
 * @s2: string two
 * @n: maximum number of characters from s2 to concatenate
 *
 * Return: a pointer to the newly allocated concatenated string
 * or NULL if memory allocation fails
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *nwstring;
	unsigned int a, b, i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	a = strlen(s1);
	b = strlen(s2);

	if (n >= b)
		n = b;

	nwstring = malloc(a + n + 1);
	if (nwstring == NULL)
		return (NULL);

	for (i = 0; i < a; i++)
		nwstring[i] = s1[i];

	for (j = 0; j < n; j++)
		nwstring[i + j] = s2[j];

	nwstring[i + j] = '\0';
	return (nwstring);
}

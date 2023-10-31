#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: string one
 * @s2: string two
 *
 * Return: pointer of an array of chars
 */

char *str_concat(char *s1, char *s2)
{
	char *concate;
	unsigned int a = 0, b = 0;
	unsigned int i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[a])
		a++;
	while (s2[b])
		b++;

	concate = (char *)malloc(a + b + 1);

	if (concate == NULL)
		return (NULL);

	for (i = 0; i < a; i++)
		concate[i] = s1[i];

	for (j = 0; j < b; j++)
		concate[i + j] = s2[j];

	concate[i + j] = '\0';

	return (concate);
}

#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of a program
 * @ac: argument count
 * @av: argument vector
 *
 * Return: pointer of an array of char
 */

char *argstostr(int ac, char **av)
{
	char *concate;
	int length = 0;
	int i, j, k = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			length++;
		length++;
	}

	length++;

	concate = malloc(length * sizeof(char));
	if (concate == NULL)
	{
		free(concate);
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			concate[k] = av[i][j];
			k++;
		}
		concate[k] = '\n';
		k++;
	}
	concate[k] = '\0';

	return (concate);
}

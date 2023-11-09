#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - prints a string followed by a new line
 * @separator: string to be printed between the strings
 * @n: number of strings passed to the function
 *
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int j;
	char *str;

	va_start(args, n);

	for (j = 0; j < n; j++)
	{
		str = va_arg(args, char *);
		
		if (str != NULL)
			printf("%s", str);

		if (separator != NULL && j < n - 1 && str != NULL)
			printf("%s", separator);
	}

	va_end(args);

	printf("\n");
}

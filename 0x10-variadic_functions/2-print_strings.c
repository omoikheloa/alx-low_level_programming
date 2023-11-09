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
		
		if (!str)
			str = "(nil)";
		if (!separator)
			printf("%s", str);
		else if (separator && j == 0)
			printf("%s", str);
		else
			printf("%s%s", separator, str);
	}

	va_end(args);

	printf("\n");
}

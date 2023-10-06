#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * Description: prints the alphabet in lowercase,
 * and in uppercase, followed by a new line.
 * Return: 0 (Success)
 */
int main(void)
{
	char om = 'a';

	while (om <= 'z')
	{
		putchar(om);
		om++;
	}

	om = 'A';

	while (om <= 'Z')
	{
		putchar(om);
		om++;
	}

	putchar('\n');
	return (0);
}

#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * Description: print numbers of base 16 in lowercase
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char numbers;

	for (number = '0'; number <= '9'; number++)
		putchar(number);

	for (number = 'a'; number <= 'f'; number++)
		putchar(number);

	Putchar('\n');

	return (0);
}

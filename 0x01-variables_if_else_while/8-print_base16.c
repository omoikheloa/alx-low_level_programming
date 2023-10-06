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

	for (numbers = '0'; numbers <= '9'; numbers++)
		putchar(numbers);

	for (numbers = 'a'; numbers <= 'f'; numbers++)
		putchar(numbers);

	putchar('\n');

	return (0);
}

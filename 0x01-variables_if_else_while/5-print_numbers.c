#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * Description: Prints all single digit numbers 1-10"
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int number;

	for (number = 0; number < 10; number++)
		printf("%i", number);
	putchar('\n');

	return (0);
}

#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * Description: Print single digit numbers using putchar
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int number;

	for (number = 0; number < 10; number++)
		putchar(number + '0');

	putchar('\n');

	return (0);
}

#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * Description: Prints alphabets backwards
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alphabets;

	for (alphabets = 'z'; alphabets >= 'a'; alphabets--)
		putchar(alphabets);
	putchar('\n');

	return (0);
}

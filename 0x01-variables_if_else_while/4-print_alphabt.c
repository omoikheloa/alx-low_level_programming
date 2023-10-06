#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * Description: prints letters of the alphabet
 * without e & q
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char alphabets;

	for (alphabets = 'a'; alphabets <= 'z'; alphabets++)
	{
		if (alphabets != 'e' && alphabets != 'q')
			putchar(alphabets);
	}
	putchar('\n');

	return (0);
}

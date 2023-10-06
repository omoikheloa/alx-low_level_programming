#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * Description: Print combinationa of single digit
 * numbers using putchar
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char digit = '0';

	while (digit <= '9')
	{
		putchar(digit);

		if (digit != '9')
		{
			putchar(',');
			putchar(' ');
		}
		digit++;
	}

	putchar ('\n');
	return (0);
}

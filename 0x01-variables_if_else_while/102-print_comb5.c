#include <stdio.h>

/**
 * main - Entry point
 * Description: create two pairs of numbers
 *
 * Return: 0
 */
int main(void)
{
	int a, b;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			if (a * 10 + b < 99)
			{
				putchar(a + '0');
				putchar(b + '0');
				putchar(' ');
				putchar('0' + a);
				putchar('0' + b);

				if (a != 9 || b != 8)
				{
					putchar(',');
					putchar(' ');

				}

			}

		}

	}
	putchar('\n');

	return (0);
}

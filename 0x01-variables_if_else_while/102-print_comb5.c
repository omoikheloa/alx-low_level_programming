#include <stdio.h>

/**
 * main - Entry point
 * Description: create two pairs of numbers
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int a, b;

	for (a = 0; a <= 99; a++)
	{
		for (b = a; b <= 99; b++)
		{
			if (b != a)
			{
				putchar(a / 10 + 48);
				putchar(a % 10 + 48);
				putchar(' ');
				putchar(b / 10 + 48);
				putchar(b % 10 + 48);

				if (!(a == 99 && b == 99))
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

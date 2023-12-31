#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * Description: program that prints comnination of three digits
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int a;
	int b;
	int c = 0;

	while (c < 10)
	{
		b = 0;
		while (b < 10)
		{
			a = 0;
			while (a < 10)
			{
				if (a != b && b != c && c < b && b < a)
				{
					putchar('0' + c);
					putchar('0' + b);
					putchar('0' + a);

					if (a + b + c != 9 + 8 + 7)
					{
						putchar(',');
						putchar(' ');
					}
				}

				a++;
			}
			b++;

		}
		c++;
	}
	putchar('\n');

	return (0);
}

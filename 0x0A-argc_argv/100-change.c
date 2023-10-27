#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints minimum number of coins to make change
 * for an anmout of money
 * @argc: number of command line arguments
 * @argv: array that contains the program command line arguments
 *
 * Return: 0 (success)
 */

int main(int argc, char *argv[])
{
	int cents, num_coins, i;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);
	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}

	num_coins = 0;
	for (i = 0; i < 5; i++)
	{
		while (cents >= coins[i])
		{
			cents -= coins[i];
			num_coins++;
		}
	}

	printf("%d\n", num_coins);
	return (0);
}


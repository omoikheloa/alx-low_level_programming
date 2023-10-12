#include "main.h"

/**
 * main - tests function that prints if integer is positive or negative
 * positive_or_negative - checks whether num is positive or negative
 * Return: 0
 */

void positive_or_negative(int num)
{
	if (num > 0)
	{
		printf("%d is positive\n", num);
	}
	else if (num < 0)
	{
		printf("%d is negative\n", num);
	}
	else
	{
		printf("%d is zero\n", num);
	}
}

int main(void)
{
	int i;

	i = 0;
	positive_or_negative(i);
	return (0);
}

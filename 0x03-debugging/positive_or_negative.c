#include <stdio.h>

void positive_or_negative(int num)
{
	if (num > 0)
	{
		printf("%d is positive\n", num);
	}
	else if (num == 0)
	{
		printf("%d is zero\n", num);
	}
	else
	{
		printf("%d is negative\n", num);
	}
}

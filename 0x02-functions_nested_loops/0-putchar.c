#include "main.h"

/**
 * main - prints _putchar, followed by a new line
 * Return: Always 0 (Success)
 */

int main(void)
{
	char alx[] = "_putchar";

	int a;

	for (a = 0; a < 8; a++)
	{
		_putchar(alx[a]);
	}
	_putchar('\n');
	return (0);
}	

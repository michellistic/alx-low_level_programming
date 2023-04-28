#include "main.h"

/**
 * print_line - what can i say.
 * @n: number of times the character _ is printed
 * Return: hopefully a straight line
 */

void print_line(int n)
{
	int x;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (x = 0; x < n; x++)
		{
			_putchar(95);
		}
		_putchar('\n');
	}
}

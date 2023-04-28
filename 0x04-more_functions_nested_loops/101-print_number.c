#include <stdio.h>
#include "main.h"

/**
 * print_number - prints numbers
 * @n: integer to be printed
 * Return: nothing
 */

void print_number(int n)
{
	unsigned int k;

	if (n < 0)
	{
		n *= -1;
		k = n;
		_putchar('-');
	}
	k = n;
	if (k >= 10)
	{
		print_number(k / 10);
	}
	_putchar((unsigned int) n % 10 + '0');
}

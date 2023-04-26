#include "main.h"

/**
 * int_islower(int c) - checks for lowercase characters
 * Return: 1 if c is lowercase, 0 if it's not
 */

int_islower(int c)
{
	int c;
	
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

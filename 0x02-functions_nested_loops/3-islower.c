#include "main.h"

/**
 *_islower(int c) - checks for lowercase characters
 * @c - the character to be checked
 * Return: 1 if c is lowercase, 0 if it's not
 */

int _islower(int c)

{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

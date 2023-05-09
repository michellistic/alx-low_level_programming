#include "main.h"

/**
 * _memset - entry point
 * @s: variable
 * @b: byte
 * @n: number
 * Return: 0
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}

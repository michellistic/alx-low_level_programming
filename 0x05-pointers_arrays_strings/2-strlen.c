#include <stdio.h>

/**
 * strlen - counts the length of a string
 * @str: string to be counted.
 * Return: nothing
 */

size_t _strlen(const char *str)
{
	size_t length = 0;

	while(*str++)
		length++;
	return(length);
}

#include "main.h"

/**
 * _puts - prints a strings followed by a new line to stdout
 * @str: string to be printed out
 * Return: nothing...for now
 */

void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Prints all numbers of base 16 in order followed by a new line
 * Return: Always 0 (Success)
 */

int main(void)
{
int n;
char c;
	for (n = 0; n <= 16; n++)
		putchar(n);
	for (c = 'a'; c <= 'f'; c++)
		putchar (c);
putchar('\n');
return (0(;
}

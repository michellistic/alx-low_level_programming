#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Print the lowercase alphabet in reverse, followed by a new line
 * Return: Always 0 (Success)
 */

int main(void)
{
char n;
	for (n = 'z'; n >= 'a'; n--)
		putchar(n);
putchar('\n');

return (0);
}

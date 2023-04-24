#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Print all possible combinations of single digit numbers
 * Return: Always 0 (Success)
 */

int main(void)i
{
int n;
	for (n = '0'; n <= '9'; n++)
		putchar(n);
	
		if (n != '9')
		{
				putchar(',');
				putchar(' ');
				}
	putchar('\n');
return (0);
}

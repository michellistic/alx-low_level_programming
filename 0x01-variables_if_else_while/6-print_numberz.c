#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/** main - Prints all single digit numbers of base 10 starting from 0
 * Return - Always 0 (Success)
 */

int main(void)
{
int x;
		for (x = '0'; x <= '9'; x++)
		putchar(x);
		putchar('\n');
		return (0);
}

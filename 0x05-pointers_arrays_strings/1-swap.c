#include "main.h"

/**
 * swap_int - swaps the value of two integers
 * @a: an integer
 * @b: another integer
 * Return: nothing
 */

void swap_int(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;
}

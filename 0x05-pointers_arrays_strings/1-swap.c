#include "main.h"
/**
 * swap_int - swaps the values of two integers.
 *
 * @a: 1st pointer
 * @b: 2nd pointer
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

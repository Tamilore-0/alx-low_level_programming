#include "main.h"

/**
 * clear_bit - Clears the bit at given index of the given unsigned long int.
 * @n: A pointer to the unsigned long int to clear the bit in.
 * @index: The index of the bit to clear.
 *
 * Return: The unsigned long int with the bit at the given index cleared.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int temp;

	if (n == NULL)
		return (-1);

	if (index > 63)
		return (-1);

	temp = 1 << index;

	*n &= ~temp;

	return (1);
}

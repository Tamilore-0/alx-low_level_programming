#include "main.h"

/**
 * set_bit - Sets the bit at the given index of the given unsigned long int.
 * @n: A pointer to the unsigned long int to set the bit in.
 * @index: The index of the bit to set.
 *
 * Return: The unsigned long int with the bit at the given index set.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int temp;

	if (n == NULL)
		return (-1);

	if (index > 63)
		return (-1);

	temp = 1 << index;

	*n |= temp;

	return (1);
}

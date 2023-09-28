#include "main.h"

/**
 * get_bit - Returns the bit at the given index of the given unsigned long int.
 * @n: The unsigned long int to get the bit from.
 * @index: The index of the bit to get.
 *
 * Return: The bit at the given index of the given unsigned long int.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int binary[64];
	unsigned int j, i = 0;

	if (n == 0)
		return (n & 1);
	if (index == 0)
		return (n & 1);
	if (index > 63)
		return (-1);

	while (n > 0)
	{
		binary[i] = n & 1;
		n = n >> 1;
		i++;
	}

	for (j = i - 1; j > 0; j--)
	{
		if ((j - (j - index)) == index)
			return (binary[j]);
	}

	return (-1);
}

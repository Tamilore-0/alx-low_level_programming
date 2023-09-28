#include "main.h"

/**
 * flip_bits - Flips the bits of n where the corresponding bits of m are 1.
 * @n: An unsigned long int.
 * @m: An unsigned long int.
 *
 * Return: An unsigned long int with the bits of n flipped
 * where the corresponding bits of m are 1.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;
	unsigned long int store = n ^ m;

	while (store > 0)
	{
		if (store & 1)
		{
			count++;
		}
		store >>= 1;
	}

	return (count);
}

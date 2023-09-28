#include "main.h"

/**
 * print_binary - Prints the binary representation of an unsigned long int.
 * @n: The unsigned long int to print.
 *
 * Return: void.
 */

void print_binary(unsigned long int n)
{
	unsigned long int binary[64];
	int j, i = 0;

	if (n == 0)
		_putchar(0 + '0');

	while (n > 0)
	{
		binary[i] = n & 1;
		n = n >> 1;
		i++;
	}

	for (j = i - 1; j >= 0; j--)
		_putchar(binary[j] + '0');

}

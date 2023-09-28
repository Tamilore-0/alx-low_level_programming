#include "main.h"

/**
 * print_binary - Prints the binary representation of an unsigned long int.
 * @n: The unsigned long int to print.
 *
 * Return: void.
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
	{
		_putchar('0' + 0);
		return;
	}

	print_binary(n >> 1);
	_putchar('0' + (n & 1));
}


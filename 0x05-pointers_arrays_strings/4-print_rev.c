#include "main.h"
/**
 * print_rev - prints a string, in reverse
 *
 * @s: pointer parameter
 *
 * Return: void
 */
void print_rev(char *s)
{
	int length = _strlen(s);
	int i = length - 1;

	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}

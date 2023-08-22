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
	int i = 0;
	int length;

	while (s[i] != '\0')
	{
		i++;
	}

	length = i - 1;

	while (length >= 0)
	{
		_putchar(s[length]);
		length--;
	}
	_putchar('\n');
}

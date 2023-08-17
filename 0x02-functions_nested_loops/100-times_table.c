#include "main.h"
/**
 * print_times_table - prints the n times table, starting with 0.
 *
 * @n: parameter
 *
 * Return: 0
 */
void print_times_table(int n)
{
	int i = 0;
	int a, b;

	if (n > 15 || n < 0)
		return;
	while (i <= n)
	{
		for (a = 0; a <= n; a++)
		{
			b = i * a;
			if (b > 99)
			{
				_putchar(b / 100 + '0');
				_putchar((b / 10 % 10) + '0');
				_putchar(b % 10 + '0');
			}
			else if (b > 9)
			{
				_putchar(' ');
				_putchar(b / 10 + '0');
				_putchar(b % 10 + '0');
			}
			else if (a != 0)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(b + '0');
			}
			else
				_putchar(b + '0');

			if (a != n)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
		i++;
	}
}

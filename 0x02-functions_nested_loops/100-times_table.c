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
	if ((n > 15) || (n < 0))
	{
	}
	else
	{
		int i, j, c;

		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				c = i * j;
				if (c > 99)
				{
					_putchar(' ');
					_putchar(c / 100 + '0');
					_putchar((c / 10 % 10) + '0');
					_putchar(z % 10 + '0');
				if (c > 9)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(c / 10 + '0');
					_putchar(c % 10 + '0');
				}
				else
				{
					if (j != 0)
					{
						_putchar(44);
						_putchar(32);
						_putchar(32);
						_putchar(32);
					}
					_putchar(c + '0');
				}
			}
			_putchar('\n');
		}
	}
}

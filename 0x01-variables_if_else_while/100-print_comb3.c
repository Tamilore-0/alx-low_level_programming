#include <stdio.h>
/**
 * main - prints all combinations of two digits
 * Return: 0
 */
int main(void)
{
	int a, b;

	for (a = 0; a < 9; a++)
	{
		for (b = 1; b < 10; b++)
		{
			if (a < b)
			{
				putchar('0' + a);
				putchar('0' + b);

				if (a != 8 || b != 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');

	return (0);
}

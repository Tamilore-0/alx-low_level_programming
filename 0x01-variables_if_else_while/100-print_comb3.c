#include <stdio.h>
/**
 * main - prints all combinations of two digits
 * Return: 0
 */
int main(void)
{
	int n;
	int i;

	for (n = 0; n < 9; n++)
	{
		for (i = 1; i < 10; i++)
		{
			putchar('0' + n);
			putchar('0' + i);

			if (n != 8 || i != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}

#include <stdio.h>
/**
 * main - prints all possible combination of single digits
 * Return: 0
 */
int main(void)
{
	int n = 0;

	while (n < 10)
	{
		putchar('0' + n);

		if (n < 9)
		{
			putchar(',');
			putchar(' ');
		}
		n++;
	}

	putchar('\n');

	return (0);
}

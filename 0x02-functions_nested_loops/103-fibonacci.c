#include "main.h"
#include <stdio.h>
/**
 * main - prints the sum of the even-valued terms
 *
 * Return: 0
 */
int main(void)
{
	int i = 0;
	long a = 1, b = 2;
	long sum = 2;

	while (a + b < 4000000)
	{
		b += a;
		if (b % 2 == 0)
		{
			sum += b;
		}
		a = b - a;
		i++;
	}
	printf("%ld\n", sum);
	return (0);
}

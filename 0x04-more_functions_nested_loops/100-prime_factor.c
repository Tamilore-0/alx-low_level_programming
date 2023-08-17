#include <stdio.h>
/**
 * main - prints the largest prime factor of the number
 *
 * Return: 0
 */
int main(void)
{
	long num = 612852475143;
	int i, largest;

	for (i = 2; num > 1; i++)
	{
		while (num % i == 0)
		{
			largest = i;
			if (i > largest)
			{
				largest = i;
			}
			num = num / i;
		}
	}
	printf("%d\n", largest);

	return (0);
}

#include "main.h"
#include <stdio.h>
/**
 * main - prints the first 50 Fibonacci numbers
 *
 * Return: 0
 */
int main(void)
{
	long n1 = 1, n2 = 2;
	long nextTerm;
	int i;

	printf("%ld, %ld, ", n1, n2);

	for (i = 1; i <= 50; i++)
	{
		nextTerm = n1 + n2;
		printf("%ld", nextTerm);
		n1 = n2;
		n2 = nextTerm;

		if (i == 50)
		{
			printf("\n");
		}
		else
		{
			printf(", ");
		}
	}

	return (0);
}

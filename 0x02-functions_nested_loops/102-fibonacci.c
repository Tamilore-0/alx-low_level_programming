#include "main.h"
#include <stdio.h>
/**
 * main - prints the first 50 Fibonacci numbers
 *
 * Return: 0
 */
int main(void)
{
	int n1 = 1, n2 = 2;
	int nextTerm = n1 + n2;
	int i;

	printf("1, 2, ");

	for (i = 1; i <= 50; ++i)
	{
		printf("%d, ", nextTerm);
		n1 = n2;
		n2 = nextTerm;
		nextTerm = n1 + n2;
	}

	return (0);
}

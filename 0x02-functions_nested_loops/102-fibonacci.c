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
	int nextTerm;
	int i;

	printf("%d, %d, ", n1, n2);

	for (i = 1; i <= 50; i++)
	{
		nextTerm = n1 + n2;
		printf("%d, ", nextTerm);
		n1 = n2;
		n2 = nextTerm;
	}

	return (0);
}

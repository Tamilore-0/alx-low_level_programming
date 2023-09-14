#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

/**
 * print_numbers - function that prints numbers, followed by a new line.
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int num_arg;
	va_list num;

	va_start(num, n);

	if (n <= 0)
		exit(98);


	for (i = 0; i < n; i++)
	{
		num_arg = va_arg(num, int);
		if (i > 0 && i < n)
		{
			if (separator != NULL)
				printf("%s", separator);
		}
		printf("%d", num_arg);

	}
	va_end(num);

	printf("\n");
}

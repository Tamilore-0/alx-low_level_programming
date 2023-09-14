#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - function that prints strings, followed by a new line.
 * @separator: string to be printed between the strings
 * @n: number of strings passed to the function
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *strings;
	va_list list;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		strings = va_arg(list, char *);

		if (i > 0 && i < n)
			printf("%s", separator);

		printf("%s", strings);

	}
	va_end(list);

	printf("\n");
}

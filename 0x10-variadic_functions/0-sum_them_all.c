#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - function that returns the sum of all its parameters.
 * @n: number
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	int num_arg;

	va_list num;

	va_start(num, n);

	if (n == 0)
		return (0);

	for (i = 0; i < n; i++)
	{
		num_arg = va_arg(num, int);
		sum += num_arg;
	}

	va_end(num);

	return (sum);
}

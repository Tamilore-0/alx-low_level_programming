#include "main.h"
/**
 * _abs - computes absolute value of integer
 * @n: parameter
 * Return: 0
 */
int _abs(int n)
{
	int absolute;

	if (n < 0)
	{
		absolute = n * -1;
		return (absolute);
	}
	else
	{
		return (n);
	}
}

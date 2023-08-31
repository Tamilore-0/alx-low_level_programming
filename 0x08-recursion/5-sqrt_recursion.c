#include "main.h"

/**
 * _sqrt_support -  finds the natural square root of a number.
 *
 * @num: The integer
 * @root: The root
 *
 * Return: square root
 */
int support(int num, int root)
{
	if ((root * root) > num)
	{
		return (-1);
	}
	else if ((root * root) == num)
	{
		return (root);
	}
	else
	{
		return (support(num, root + 1));
	}
}

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @: the integer
 * Return: The square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (support(n, 0));
	}
}

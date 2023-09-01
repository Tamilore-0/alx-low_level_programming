#include "main.h"
/**
 * _islower - checks for lowercase
 * @c: Parameter
 * Return: 1 for lowercase or 0 if otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

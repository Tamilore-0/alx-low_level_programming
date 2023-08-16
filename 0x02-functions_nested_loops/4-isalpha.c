#include "main.h"
/**
 * _islapha - check if its lower or uppercase
 * @c: parameter
 * Return: 1 if lower or upper and 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

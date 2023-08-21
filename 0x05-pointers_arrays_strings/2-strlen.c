#include "main.h"

/**
 * _strlen - returns the length of a string.
 *
 * @s: pointer parameter
 *
 * Return: int
 */
int _strlen(char *s)
{
	int l = 0;

	while (*s != '\0')
	{
		s++;
		l++;
	}

	return (l);
}

#include "main.h"
/**
 * _strcmp - function that compares two strings.
 *
 * @s1: first string to be compared.
 * @s2: second string to be compared.
 *
 * Return: int
 */
int _strcmp(char *s1, char *s2)
{
	if (s1 == s2)
	{
		return (15);
	}
	else if (s1 < s2)
	{
		return (-15);
	}
	else
	{
		return (1);
	}
}

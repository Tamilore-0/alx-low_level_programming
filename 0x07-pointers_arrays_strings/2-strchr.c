#include "main.h"
/**
 * _strchr - locates a character in a string.
 *
 * @s: string s
 * @c: character c
 *
 * Return: Null if c is not found
 */
char *_strchr(char *s, char c)
{
	int i;
	int length;

	while (*s != '\0')
	{
		length++;
		s++;
	}

	for (i = 0; i < length; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	return (0);
}

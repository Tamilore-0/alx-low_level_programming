#include "main.h"
/**
 * _strspn - function that gets the length of a prefix substring.
 *
 * @s: d
 * @accept: e
 *
 * Return: no of bytes in the initial segment of s
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count, check;
	unsigned int i;
	unsigned int j;

	count = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		check = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				count++;
				check = 1;
			}
		}
		if (check == 0)
		{
			return (count);
		}
	}
	return (0);
}

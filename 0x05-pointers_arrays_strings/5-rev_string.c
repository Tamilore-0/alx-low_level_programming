#include "main.h"
/**
 * rev_string - reverses a string
 *
 * @s: parameter
 *
 * Return: void
 */
void rev_string(char *s)
{
	int i = 0;
	int end;
	int start = 0;
	char temp;

	while (s[i] != '\0')
	{
		i++;
	}
	end = i - 1;

	while (start < end)
	{
		temp = s[start];
		s[start] = s[end];
		s[end] = temp;
		start++;
		end--;
	}
}

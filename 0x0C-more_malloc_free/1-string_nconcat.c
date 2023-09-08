#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - function that concatenates two strings.
 * @s1: first string
 * @s2: second string
 * @n: number of bytes
 * Return: a pointer to a newly allocated space in memory which contains s1,
 * followed by the first n bytes of s2, and null terminated
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, length;
	unsigned int len1 = 0, len2 = 0;
	char *ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;
	if (n > len2)
		n = len2;

	length = len1 + n;
	ptr = malloc(length + 1);
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < length; i++)
	{
		if (i < len1)
			ptr[i] = s1[i];
		else
			ptr[i] = s2[i - len1];
	}

	ptr[i] = '\0';
	return (ptr);
}

#include "main.h"
/**
 * _strncat - concatenates two strings.
 *
 * @dest: destination
 * @src: source
 * @n: n bytes from src
 *
 * Return: pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;
	char *ptr;

	ptr = dest;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (j < n && src[j] != '\0')
	{
		dest[i + j] = src[j];
		j++;
	}

	if (j < n)
	{
		dest[i + j] = '\0';
	}
	return (ptr);
}

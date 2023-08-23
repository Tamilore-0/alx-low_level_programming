#include "main.h"
/**
 * _strncpy - function that copies a string.
 *
 * @dest: destination
 * @src: source
 * @n: number
 *
 * Return: char
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;
	char *ptr;

	ptr = dest;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	/* if can be used but for, while lessen security vulnerabilities*/
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (ptr);
}

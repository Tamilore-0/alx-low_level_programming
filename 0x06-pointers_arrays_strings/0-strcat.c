#include "main.h"
/**
 * _strcat - concatenates two strings.
 *
 * @dest: pointing to destination file
 * @src: source
 *
 * Return: char
 */
char *_strcat(char *dest, char *src);
{
	int i = 0;
	int j = 0;
	char *ptr;

	ptr = dest;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		src[j] = dest[i + j];
		j++;
	}

	dest[i + j] = '\0';
	return (ptr);
}

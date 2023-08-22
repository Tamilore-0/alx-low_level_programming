#include "main.h"
/**
 * *_strcpy - copy the string pointed to by src to buffer pointed to by dest
 *
 * @dest: pointer to the buffer destination
 * @src: pointer to the source string
 *
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	char *pointer;

	pointer = dest;
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';
	return (pointer);
}


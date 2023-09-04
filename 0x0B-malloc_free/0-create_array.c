#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an char array, initializes it with a specific char
 * @size: size of array to be created
 * @c: specific char
 * Return: a pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *A = (char *) malloc(size * sizeof(c));

	if (size == 0)
	{
		return (NULL);
	}

	if (A == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		A[i] = c;
	}

	return (A);
}

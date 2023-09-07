#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - function that allocates memory using malloc.
 * @b: input
 * Return: a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(sizeof(unsigned int) * b);

	if (ptr == NULL)
	{
		free(ptr);
		exit(98);
	}

	return (ptr);
}

#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to the memory previously allocated with a call to malloc
 * @old_size: the allocated space for ptr
 * @new_size: new size, in bytes of the new memory block
 * Return: a pointer to new memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	char *pointer;
	char *char_ptr = (char *)ptr;

	if (ptr == NULL)
	{
		ptr = malloc(new_size);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	pointer = malloc(new_size);

	if (pointer == NULL)
		return (NULL);
	
	if (new_size > old_size)
	{
		for (i = 0; i < old_size; i++)
			pointer[i] = char_ptr[i];
	}

	if (new_size < old_size)
	{
		for (i = 0; i < new_size; i++)
			pointer[i] = char_ptr[i];
	}
	if (new_size == old_size)
		return (ptr);

	free(ptr);
	return (pointer);
}

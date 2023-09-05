#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: column of the array
 * @height: row of the array
 * Return: If width or height is 0 or negative, return NULL
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **ptr;

	if (width < 1 || height < 1)
		return (NULL);

	ptr = malloc(height * sizeof(int));

	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		ptr[i] = malloc(width * sizeof(int));

		if (ptr[i] == NULL)
		{
			for (i--; i >= 0; i--)
				free(ptr[i]);
			free(ptr);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			ptr[i][j] = 0;
		}
	}

	return (ptr);
}

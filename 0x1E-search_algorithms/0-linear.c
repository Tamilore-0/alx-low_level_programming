#include <stdio.h>
#include "search_algos.h"

/**
 * linear_search - Searches for a value in an array using linear search.
 *
 * @array: Pointer to the first element of the array.
 * @size: Number of elements in the array.
 * @value: Value to search for in the array.
 *
 * Return: Index of the value if found, otherwise -1.
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (array == NULL)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		if (value == *(array + i))
		{
			printf("Value checked array[%lu] = [%d]\n", i, *(array + i));
			return (i);
		}
		else
		{
			printf("Value checked array[%lu] = [%d]\n", i, *(array + i));
		}
	}
	return (-1);
}

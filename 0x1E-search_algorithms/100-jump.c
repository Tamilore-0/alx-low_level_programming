#include <stdio.h>
#include "search_algos.h"
#include <math.h>

/**
* jump_search - Searches for a value in a sorted array using jump algorithm.
*
* @array: Pointer to the first element of the sorted array.
* @size: Number of elements in the array.
* @value: Value to search for in the array.
*
* Return: Index of the value if found, otherwise -1.
*/
int jump_search(int *array, size_t size, int value)
{
	size_t jump = sqrt(size);
	size_t i = 0;

	size_t low = 0;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i += jump)
	{

		if (*(array + i) < value)
		{
			printf("Value checked array[%lu] = [%d]\n", i, *(array + i));
			low = i;
		}
		else
		{
			break;
		}
	}

	printf("Value found between indexes [%lu] and [%lu]\n", low, low + 3);

	for (i = low; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, *(array + i));
		if (*(array + i) == value)
		{
			return (i);
		}
	}

	return (-1);
}

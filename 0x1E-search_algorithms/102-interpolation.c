#include <stdio.h>
#include "search_algos.h"

/**
* interpolation_search - Searches for a value using interpolation algorithm.
*
* @array: Pointer to the first element of the sorted array.
* @size: Size of the array.
* @value: Value to search for in the array.
*
* Return: returns the index of the value, otherwise returns -1.
*/
int interpolation_search(int *array, size_t size, int value)
{
	int low = 0;

	int high = size - 1;

	size_t pos;

	if (array == NULL)
	{
		return (-1);
	}

	while (low <= high)
	{
		pos = low + (value - array[low]) * (high - low) / (array[high] - array[low]);

		if (pos > size)
		{
			printf("Value checked array[%lu] is out of range\n", pos);
			break;
		}

		printf("Value checked array[%lu] = [%d]\n", pos, *(array + pos));

		if (*(array + pos) == value)
		{
			return (pos);
		}
		else if (*(array + pos) > value)
		{
			high = pos - 1;
		}
		else
		{
			low = pos + 1;
		}
	}

	return (-1);
}

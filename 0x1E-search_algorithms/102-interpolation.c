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

	int pos;

	if (array == NULL)
	{
		return (-1);
	}

	while (low <= high)
	{
		if (value < array[low] || value > array[high])
		{
			printf("Value checked array[%lu] is out of range\n", size);
			return (-1);
		}

		pos = low + (value - array[low]) * (high - low) / (array[high] - array[low]);
		printf("Value checked array[%d] = [%d]\n", pos, *(array + pos));

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

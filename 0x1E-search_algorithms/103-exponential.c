#include <stdio.h>
#include "search_algos.h"

/**
* exponential_search - Searches for a value using exponential search algorithm
* @array: Pointer to the first element of the sorted array.
* @size: Number of elements in the array.
* @value: Value to search for in the array.
*
* Return: returns the index of the value, otherwise returns -1.
*/
int exponential_search(int *array, size_t size, int value)
{
	size_t bound = 1;
	int low;
	int high;
	int mid;

	if (array == NULL)
	{
		return (-1);
	}

	while (bound < size && array[bound] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", bound, *(array + bound));
		bound *= 2;
	}

	low = bound / 2;
	high = bound < size ? bound : size - 1;
	printf("Value found between indexes [%d] and [%d]\n", low, high);

	while (low <= high)
	{
		exponential_display(low, high, array);
		mid = low + (high - low) / 2;

		if (array[mid] == value)
		{
			return (mid);
		}
		else if (array[mid] > value)
		{
			high = mid - 1;
		}
		else
		{
			low = mid + 1;
		}
	}
	return (-1);
}


/**
* exponential_display - Displays the subarray being searched.
*
* @low: The lower index of the subarray.
* @high: The upper index of the subarray (exclusive).
* @array: Pointer to the array containing elements to display.
*/
void exponential_display(int low, int high, int *array)
{
	int i;

	printf("Searching in array: ");

	for (i = low; i <= high; i++)
	{
		printf("%d", array[i]);

		if (i < high)
			printf(", ");
	}
	printf("\n");
}

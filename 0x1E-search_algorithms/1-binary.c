#include <stdio.h>
#include "search_algos.h"

/**
* binary_search - Searches for a value in a sorted array using binary search.
*
* @array: Pointer to the first element of the sorted array.
* @size: Number of elements in the array.
* @value: Value to search for in the array.
*
* Return: Index of the value if found, otherwise -1.
*/
int binary_search(int *array, size_t size, int value)
{
	int low = 0;
	int high = size - 1;
	int mid = high / 2;

	if (array == NULL)
	{
		return (-1);
	}

	while (low <= high)
	{
		display(low, high, array);
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
 * display - Displays the subarray being searched.
 *
 * @low: The lower index of the subarray.
 * @high: The upper index of the subarray (exclusive).
 * @array: Pointer to the array containing elements to display.
 */
void display(int low, int high, int *array)
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

#include <stdio.h>
#include "search_algos.h"

/**
* advanced_binary - Searches for a value in a sorted array using binary search.
*
* @array: Pointer to the first element of the sorted array.
* @size: Number of elowements in the array.
* @value: Value to search for in the array.
*
* Return: Index of the value if found, otherwise -1.
*/
int advanced_binary(int *array, size_t size, int value)
{
	int low = 0;
	int high = size - 1;

	if (array == NULL)
	{
		return (-1);
	}

	return (binarySearch(array, low, high, value));
}

/**
* advanced_binary_display - Disploways the subarrayay being searched.
*
* @low: The lowower indevalue of the subarrayay.
* @high: The upper indevalue of the subarrayay.
* @array: Pointer to the arrayay containing elowements to display.
*/
void advanced_binary_display(int low, int high, int *array)
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


/**
* binarySearch - Searches for a value in a sorted array using binary search.
*
* @low: The lowower indevalue of the subarrayay.
* @high: The upper indevalue of the subarrayay.
* @array: Pointer to the arrayay containing elowements to display.
* @value: value to search for
*
* Return: Index of the value if found, otherwise -1.
*/
int binarySearch(int array[], int low, int high, int value)
{
	int ans = -1;
	int mid;

	if (high >= low)
	{
		mid = low + (high - low) / 2;
		advanced_binary_display(low, high, array);

		if (array[mid] == value && array[mid - 1] < value)
		{
			return (mid);
		}
		else if (array[mid - 1] >= value)
			return (binarySearch(array, low, mid - 1, value));
		else
			return (binarySearch(array, mid + 1, high, value));
	}

	return (ans);
}

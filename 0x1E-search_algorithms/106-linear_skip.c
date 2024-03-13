#include <stdio.h>
#include "search_algos.h"

/**
 * linear_skip - Searches for a value in a sorted skip list of integers.
 *
 * @list: Pointer to the head of the sorted skip list.
 * @value: The value to search for.
 *
 * Return: Pointer to the node where value is located or NULL if not found.
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *current = list;

	if (list == NULL)
		return (NULL);

	while (list && list->express)
	{
		current = list;
		list = list->express;

		printf("Value checked at index [%lu] = [%d]\n", list->index, list->n);

		if (list->n > value)
			break;

	}

	printf("Value found between indexes [%lu] and [%lu]\n"
			, current->index, list->index);

	while (current)
	{
		printf("Value checked at index [%lu] = [%d]\n", current->index, current->n);

		if (current->n == value)
			return (current);

		current = current->next;

	}

	return (NULL);
}

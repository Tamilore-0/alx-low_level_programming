#include <stdio.h>
#include "search_algos.h"
#include <math.h>

/**
 * jump_list - Searches for a value in a sorted singly linked list of integers
 *             using the jump search algorithm.
 *
 * @list: Pointer to the head of the sorted singly linked list.
 * @size: The number of nodes in the list.
 * @value: The value to search for.
 *
 * Return: Pointer to the first node where value is located or NULL if not
 *         found or list is NULL.
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t jump = sqrt(size);
	size_t i = 0;
	listint_t *head = list;

	if (list == NULL || size == 0)
		return (NULL);

	while (list)
	{
		head = list;
		while (list->next && i < jump)
		{
			list = list->next;
			i++;
		}
		printf("Value checked at index [%lu] = [%d]\n", jump, list->n);

		if (list->n >= value)
			break;
		jump += sqrt(size);
	}

	printf("Value found between indexes [%lu] and [%lu]\n", head->index, jump);

	while (head)
	{
		printf("Value checked at index [%lu] = [%d]\n", head->index, head->n);

		if (head->n == value)
			break;

		head = head->next;
	}

	return (head->n == value ? head : NULL);
}

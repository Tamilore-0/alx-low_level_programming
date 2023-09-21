#include "lists.h"

/**
 * list_len - printes number of elements in list
 * @h: contains pointer argument
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}

	return (count);
}

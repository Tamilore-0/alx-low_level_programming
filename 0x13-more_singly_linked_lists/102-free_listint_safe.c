#include "lists.h"

/**
 * free_listint_safe - frees the list
 * @h: pointer to head
 * Return: number of nodes
 */
size_t free_listint_safe(listint_t **h)
{
	size_t d;
	listint_t *e;

	d = 0;
	if (!h)
		return (d);
	while (*h && *h > (*h)->next)
	{
		e = *h;
		*h = (*h)->next;
		free(e);
		d++;
	}
	if (*h)
	{
		free(*h);
		*h = NULL;
		d++;
	}
	return (d);
}

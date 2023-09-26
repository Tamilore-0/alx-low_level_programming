#include "lists.h"
/**
 * find_listint_loop - finds the loop
 * @head: head
 * Return: address
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *d = head;
	listint_t *e = head;

	if (!head)
		return (NULL);
	while (d && e && e->next)
	{
		e = e->next->next;
		d = d->next;
		if (e == d)
		{
			d = head;
			while (d != e)
			{
				d = d->next;
				e = e->next;
			}
			return (e);
		}
	}
	return (NULL);
}

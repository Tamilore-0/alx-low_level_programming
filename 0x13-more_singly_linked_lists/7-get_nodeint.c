#include "lists.h"

/**
 * get_nodeint_at_index - Returns node at the given index in the linked list.
 *
 * @head: The head of the linked list.
 * @index: The index of the node to return.
 *
 * Return: The node at the given index, or NULL if the index is out of bounds.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;

	while (head != NULL)
	{
		if (count == index)
			return (head);

		head = head->next;
		count++;
	}

	return (NULL);
}

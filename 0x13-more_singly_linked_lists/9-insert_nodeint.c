#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts new node at given index in a linked list.
 *
 * @head: A pointer to the head of the linked list.
 * @idx: The index at which to insert the new node.
 * @n: The value to be added to the new node.
 *
 * Return: A pointer to the head of the linked list with the new node inserted.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *tmp;
	unsigned int i;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	tmp = *head;
	for (i = 0; i < idx - 1; i++)
	{
		if (tmp == NULL)
			return (NULL);
		tmp = tmp->next;
	}
	new_node->next = tmp->next;
	tmp->next = new_node;
	return (new_node);
}

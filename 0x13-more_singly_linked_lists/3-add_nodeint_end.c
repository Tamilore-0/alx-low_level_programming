#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list.
 * @head: A pointer to a pointer to the head of the list
 * @n: The value to be added to the new node
 *
 * Return: a pointer to the new head
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *endnode;
	listint_t *temp;

	endnode = malloc(sizeof(listint_t));

	if (!endnode)
		return (NULL);

	endnode->n = n;
	endnode->next = NULL;

	if (*head != NULL)
	{
		temp = *head;
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = endnode;
	}
	else
		*head = endnode;

	return (endnode);
}

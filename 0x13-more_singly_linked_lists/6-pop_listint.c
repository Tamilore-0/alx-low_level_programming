#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: Pointer to the head of the linked list
 *
 * Return: vallue of the node that was poope
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int value;

	if (!*head)
		return (0);

	value = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (value);
}

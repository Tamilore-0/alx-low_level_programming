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

	if (!*head)
		return (0);

	temp = *head;
	*head = (*head)->next;
	free(temp);
	return (temp->n);
}

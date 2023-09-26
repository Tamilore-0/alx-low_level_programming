#include "lists.h"

/**
 * free_listint2 - function that frees a listint_t list.
 * @head: pointer to the head of the node
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}

	*head = NULL;
}

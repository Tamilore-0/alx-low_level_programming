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

	temp = *head;
	while (temp)
	{
		free(temp);
		temp = temp->next;
	}

	*head = NULL;
}

#include "lists.h"

/**
 * add_nodeint - Adds a new node to the beginning of a listint_t list.
 * @head: A pointer to a pointer to the head of the list.
 * @n: The value to be added to the new node.
 *
 * Return: A pointer to the new head of the list or NULL if the function fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp;

	temp = malloc(sizeof(listint_t));

	if (!temp)
		return (NULL);

	temp->n = n;
	temp->next = *head;
	*head = temp;

	return (temp);
}

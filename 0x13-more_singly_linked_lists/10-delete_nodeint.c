#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes node at a given index in listint_t list.
 *
 * @head: A pointer to the head of the listint_t list.
 * @index: The index of the node to delete.
 *
 * Return: 1 if node was deleted successfuly, 0 otherwise.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *prev;
	unsigned int count;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	temp = *head;
	for (count = 0; count < index - 1; count++)
	{
		if (temp == NULL)
			return (-1);

		prev = temp;
		temp = temp->next;
	}
	prev->next = temp->next;

	free(temp);
	return (1);
}

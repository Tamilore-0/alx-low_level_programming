#include "lists.h"

/**
 * sum_listint - Returns the sum of all the elements in a linked list.
 *
 * @head: The head of the linked list.
 *
 * Return: The sum of all the elements in the linked list.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}

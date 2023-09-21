#include <stdlib.h>
#include "lists.h"

/**
 * free_list - function with one argument
 * @head: pointer to list_t
 * Description: frees list
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *ptr;

	while (head)
	{
		ptr = head->next;
		free(head->str);
		free(head);
		head = ptr;
	}
}

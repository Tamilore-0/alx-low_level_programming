#include <stdlib.h>
#include "lists.h"

/**
 * add_node_end - function with two arguments
 * @head: pointer to struct of linked list
 * @str: char pointer to string
 *
 * Return: address of new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	int count = 0;
	list_t *endnode, *ptr;

	endnode = malloc(sizeof(list_t));
	if (endnode == NULL)
		return (NULL);

	if (str)
	{
		endnode->str = _strdup(str);

		while (str[count] != '\0')
			count++;
		endnode->len = count;
	}
	else
	{
		endnode->str = NULL;
		endnode->len = 0;
	}
	endnode->next = NULL;

	if (*head)
	{
	ptr = *head;
	while (ptr->next != NULL)
		ptr = ptr->next;
	ptr->next = endnode;
	}
	else
		*head = endnode;

	return (endnode);
}


/**
 * *_strdup - function with one argument
 * @str: string argument
 *
 *
 * Return: pointer
 */
char *_strdup(const char *str)
{
	int i, j;
	char *ptr;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (*(str + i) != '\0')
	{
		i++;
	}

	ptr = malloc(sizeof(char) * i + 1);

	if (ptr == NULL)
		return (NULL);

	j = 0;
	while (str[j] != '\0')
	{
		ptr[j] = str[j];
		j++;
	}
	ptr[j] = '\0';
	return (ptr);
}

#include "lists.h"

/**
 * add_node - function that adds a new node at the beginning of a list_t list.
 * @head: double pointer to head of list
 * @str: string pointer
 *
 * Return: address of new element or NULL if failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;
	int i = 0;

	temp = malloc(sizeof(list_t));

	if (temp == NULL)
		return (NULL);

	temp->str = _strdup(str);
	while (str[i] != '\0')
		i++;

	temp->len = i;
	temp->next = *head;
	*head = temp;

	return (temp);
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

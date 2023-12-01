#include "hash_tables.h"

/**
* hash_table_set - Adds an element to a hash table.
*
* @ht: A pointer to the hash table.
* @key: The key to be added.
* @value: The corresponding value to be associated with the key.
*
* Return: 1 on success, 0 on failure.
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;

	hash_node_t *newnode, *current;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);

	current = ht->array[index];
	while (current != NULL)
	{
		if (strcmp(current->key, key) == 0)
		{
			free(current->value);
			current->value = strdup(value);
			return (1);
		}
		current = current->next;
	}

	newnode = malloc(sizeof(hash_node_t));
	if (newnode == NULL)
		return (0);

	newnode->key = strdup(key);
	newnode->value = strdup(value);

	if (ht->array[index] != NULL)
	{
		newnode->next = ht->array[index];
		ht->array[index] = newnode;
	}
	else
	{
		newnode->next = NULL;
		ht->array[index] = newnode;
	}

	return (1);
}

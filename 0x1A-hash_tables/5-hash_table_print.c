#include "hash_tables.h"

/**
 * hash_table_print - Prints a hash table with chaining.
 *
 * @ht: Pointer to the hash table to be printed.
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *current;
	unsigned long int i;

	int comma_flag = 0;

	if (!ht)
	{
		return;
	}

	printf("{");
	for (i = 0; i < ht->size; ++i)
	{
		current = ht->array[i];
		while (current)
		{
			if (comma_flag)
				printf(", ");
			printf("'%s': '%s'", current->key, current->value);
			comma_flag = 1;

			current = current->next;
		}
	}
	printf("}\n");
}

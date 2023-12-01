#include "hash_tables.h"

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *current;
	unsigned long int i;

	if (!ht)
	{
		printf("{}");
	}

	printf("{");
	for (i = 0; i < ht->size; ++i)
	{
		current = ht->array[i];
		while (current)
		{
			printf("'%s': '%s'", current->key, current->value);
			if (current->next)
				printf(", ");
			current = current->next;
		}
	}
	printf("}\n");
}

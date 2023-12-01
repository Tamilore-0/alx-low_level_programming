#include "hash_tables.h"

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *current;
	unsigned long int i;
    int flag = 0;

	if (!ht)
	{
		printf("{}\n");
	}

	printf("{");
	for (i = 0; i < ht->size; ++i)
	{
		if (ht->array[i] != NULL)
        {
            if (flag == 1)
                printf(", ");

            current = ht->array[i];
		    while (current)
		    {
			    printf("'%s': '%s'", current->key, current->value);
			    current = current->next;
                if (current != NULL)
				    printf(", ");
		    }
            flag = 1;
	    }
    }
	printf("}\n");
}
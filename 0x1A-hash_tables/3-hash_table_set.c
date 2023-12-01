#include "hash_tables.c"

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
    unsigned long int index;

    if (ht == NULL || key == NULL || value == NULL)
        return (0);
}
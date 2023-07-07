#include "hash_tables.h"

/**
 *hash_table_get - function that retrieves a value associated with a key.
 *@ht: the hash table you want to look into
 *@key: the key
 *
 *Return: the value associated with the element,
 *NULL if key couldn’t be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int i;

	i = key_index((const unsigned char *)key, ht->size);
	if (ht->array[i])
	{
		if (strcmp((ht->array[i])->key, key) == 0)
			return (ht->array[i]->value);
	}
	return (NULL);
}

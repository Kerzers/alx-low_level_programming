#include "hash_tables.h"

/**
 *hash_table_delete - function that deletes a hash table.
 *@ht: hash table
 *
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *current_node, *temp;

	if (!ht)
		return;

	for (i = 0; i < ht->size; i++)
	{
		current_node = ht->array[i];
		while (current_node)
		{
			temp = current_node;
			if (temp->key)
				free(temp->key);
			if (temp->value)
				free(temp->value);
			current_node = current_node->next;
			free(temp);
		}
	}
	free(ht->array);
	free(ht);
}

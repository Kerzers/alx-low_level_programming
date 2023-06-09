#include "hash_tables.h"

/**
 *hash_table_print - function that prints a hash table.
 *print the key/value in the order that they appear in the array of hash table
 *Order: array, list
 *if ht is NULL, print nothing
 *@ht: hash table
 *
 *Return: nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	int count = 0;
	unsigned long int i;
	hash_node_t *current;

	if (!ht)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		current = ht->array[i];
		while (current)
		{
			if (!count)
			{
				count++;
				printf("'%s': '%s'", current->key, current->value);
			}
			else
				printf(", '%s': '%s'", current->key, current->value);
			current = current->next;
		}
	}
	printf("}\n");
}

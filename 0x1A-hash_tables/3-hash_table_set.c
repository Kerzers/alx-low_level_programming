#include "hash_tables.h"

/**
 *hash_table_set - function that adds an element to the hash table.
 *In case of collision, add the new node at the beginning of the list
 *@ht: the hash table you want to add or update the key/value to
 *@key: the key, cannot be empty
 *@value: the value associated with the key. value must be duplicated.
 *value can be an empty string
 *Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new = NULL, *current_node;
	unsigned long int index;

	if (ht->size == 0 || ht == NULL || !*key)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	new = malloc(sizeof(hash_node_t));
	if (!new)
		return (0);
	new->next = NULL;
	new->key = strdup(key);
	new->value = strdup(value);

	if (ht->array[index] == NULL)
	{	ht->array[index] = new;
		return (1);
	}
	current_node = ht->array[index];
	if (strcmp(current_node->key, key) == 0)
	{
		current_node->value = strdup(value);
		return (1);
	}
	else
	{
		new->next = current_node;
		ht->array[index] = new;
		return (1);
	}
}

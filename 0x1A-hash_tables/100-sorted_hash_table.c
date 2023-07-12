#include "hash_tables.h"

/**
 *shash_table_create - create a sorted hash table
 *@size: size of the array
 *
 * Return: a pointer to the newly created shash table, NULL if it failed
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *ht;

	if (size == 0)
		return (NULL);
	ht = malloc(sizeof(shash_table_t));
	if (!ht)
		return (NULL);
	ht->size = size;
	ht->array = calloc(size, sizeof(shash_node_t *));
	ht->shead = calloc(size, sizeof(shash_node_t *));
	ht->stail = calloc(size, sizeof(shash_node_t *));
	if (!ht->array)
	{
		free(ht);
		return (NULL);
	}
	return (ht);
}

/**
 *shash_table_set - function that adds an element to the shash table.
 *The key/value pair should be inserted in the sorted list at the right place
 *@ht: the hash table you want to add or update the key/value to
 *@key: the key, cannot be empty
 *@value: the value associated with the key. value must be duplicated.
 *value can be an empty string
 *Return: 1 if it succeeded, 0 otherwise
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *new = NULL, *current_node, *tmp;
	unsigned long int index;

	if (!ht || !*key || !key || !value || !ht->size)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);

	current_node = ht->shead;
	while (current_node)
	{
		if (strcmp(current_node->key, key) == 0)
		{
			free(current_node->value);
			current_node->value = strdup(value);
			if (!current_node->value)
				return (0);
			return (1);
		}
		current_node = current_node->next;
	}
	new = malloc(sizeof(shash_node_t));
	if (!new)
		return (0);
	new->key = strdup(key);
	if (!new->key)
		return (0);
	new->value = strdup(value);
	if (!new->value)
		return (0);
	new->next = ht->array[index];
	ht->array[index] = new;
	if (!ht->shead)
	{
		ht->shead = new;
		ht->stail = new;
		new->snext = NULL;
		new->sprev = NULL;
	}
	else if (strcmp(ht->shead->key, key) < 0)
	{
		tmp = ht->shead;
		while (tmp->snext && strcmp(tmp->key, key) < 0)
			tmp = tmp->snext;
		new->snext = tmp->snext;
		new->sprev = tmp;
		if (!tmp->snext)
			ht->stail = new;
		else
			tmp->snext->sprev = new;
		tmp->snext = new;
	}
	else
	{
		new->sprev = NULL;
		new->snext = ht->shead;
		ht->shead->sprev = new;
		ht->shead = new;
	}
	return (1);
}

/**
 *shash_table_get - function that retrieves a value associated with a key.
 *@ht: the sorted hash table you want to look into
 *@key: the key
 *
 *Return: the value associated with the element,
 *NULL if key couldn’t be found
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int i;
	shash_node_t *current;

	if (!ht || !key || !*key)
		return (NULL);
	i = key_index((const unsigned char *)key, ht->size);
	if (i > ht->size)
		return (NULL);
	current = ht->shead;
	while (current)
	{
		if (strcmp(current->key, key) == 0)
			return (current->value);
		current = current->next;
	}
	return (NULL);
}

/**
 *hash_table_print - function that prints a hash table.
 *print the key/value in the order that they appear in the array of hash table
 *Order: array, list
 *if ht is NULL, print nothing
 *@ht: hash table
 *
 *Return: nothing
 */
void shash_table_print(const shash_table_t *ht)
{
	int count = 0;
	shash_node_t *current;

	if (!ht)
		return;

	printf("{");

	current = ht->shead;
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
	printf("}\n");
}
/**
*void shash_table_print_rev(const shash_table_t *ht);
*void shash_table_delete(shash_table_t *ht);
*/

#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: reference to the head
 * @idx: index where to insert a new node
 * @n: data
 *
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new = NULL, *current = NULL;
	unsigned int count = 0;

	if (!h)
		return (NULL);
	if (idx == 0)
		return (add_dnodeint(h, n));
	current = *h;
	while (current)
	{
		if (idx == count)
		{
			new = malloc(sizeof(dlistint_t));
			if (!new)
				return (NULL);
			new->n = n;
			(current->prev)->next = new;
			new->next = current;
			new->prev = current->prev;
			current->prev = new;
			return (new);
		}
		count++;
		current = current->next;
	}
	if (idx == count)
		return (add_dnodeint_end(h, n));
	return (NULL);
}

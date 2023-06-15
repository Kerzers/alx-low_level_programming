#include "lists.h"

/**
 * get_dnodeint_at_index -  function that returns the nth node of
 * a dlistint_t linked list
 * @head: head of a double linked list
 * @index: the index of the node, starting from 0
 *
 * Return: the nth node of a dlistint_t linked list, NULL if it doesn't exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *node = NULL;
	unsigned int count = 0;

	if (!head)
		return (NULL);
	node = head;
	while (node)
	{
		if (count == index)
			return (node);
		count++;
		node = node->next;
	}
	return (NULL);
}

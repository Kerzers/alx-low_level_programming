#include "lists.h"

/**
 * dlistint_len - prints the number of node in a double linked list
 * @h: head of double linked list
 *
 * Return: the number of node
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;
	dlistint_t *current;

	current = (dlistint *)h;
	while (current)
	{
		count++;
		current = current->next;
	}
	return (count);
}

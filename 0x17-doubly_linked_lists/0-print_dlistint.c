#include "lists.h"

/**
 * print_dlistint - prints a double linked list
 * @h: head of the list
 *
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;
	dlistint_t *current = head;

	while (current)
	{
		printf("%d\n", current->n);
		current = cuurent->next;
		count++;
	}
	return (count);
}

#include "lists.h"

/**
 * add_dnodeint_end - adds node at the end of a double linked list
 * @head: reference to the head
 * @n: data
 *
 * Return: adresse to the new node, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new = NULL;
	dlistint_t *current = NULL;

	if (!head)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (!*head)
	{
		*head = new;
		new->prev = NULL;
	}
	else
	{
		current = *head;
		while (current->next)
			current = current->next;
		current->next = new;
		new->prev = current;
	}
	return (new);
}

#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list
 * @head: reference to the head of double linked list
 * @n: data of the new node
 *
 * Return: the adress of the new node, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = NULL;

	if (!head)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	if (!*head)
	{
		*head = new;
		new->next = NULL;
		new->prev = NULL;
	}
	else
	{
	(*head)->prev = new;
	new->prev = NULL;
	new->next = *head;
	*head = new;
	}
	return (new);
}

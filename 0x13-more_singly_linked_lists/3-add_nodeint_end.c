#include "limits.h"
#include <stdlib.h>

/**
 *add_nodeint_end - adds a node at the end of a list
 *@head: double pointer to the head of list
 *@n: integer to be added
 *Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new = NULL;
	listint_t *last = *head;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	while (last->next)
		last = last->next;
	last->next = new;
	return (new);
}



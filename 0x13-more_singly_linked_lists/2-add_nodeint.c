#include "lists.h"
#include <stdlib.h>

/**
 *add_nodeint - add new nodeint at the begenning
 *@head: refernce to the head of the listint
 *@n: an integer to be added to the list
 *Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = NULL;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}

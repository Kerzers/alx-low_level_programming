#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 *add_node_end - adds a node at the end of a list_t list
 *@head: double pointer to the head of list
 *@str: string to be duplicated
 *Return: a pointer to the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new = NULL;
	list_t *last = *head;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	new->len = strlen(str);
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

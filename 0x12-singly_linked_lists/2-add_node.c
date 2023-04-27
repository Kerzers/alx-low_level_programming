#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 *add_node - adds a node at the beginning of a list
 *@head: double pointer to the head of list
 *@str: string to be duplicated
 *Return: a pointer to the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new = NULL;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	new->len = strlen(str);
	new->next = *head;
	*head = new;
	return (new);
}



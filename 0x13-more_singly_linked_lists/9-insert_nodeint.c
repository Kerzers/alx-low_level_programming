#include "lists.h"
#include <stdlib.h>

/**
 *insert_nodeint_at_index - inserts a new node at a given position.
 *@head: double pointer to the head of a list
 *@idx: the index of the list where the new node should be added.it starts at 0
 *@n: data of the new node
 *Return: the address of the new node, or NULL if it failed
 *if it is not possible to add the new node at index idx,
 *do not add the new node and return NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new = NULL;
	listint_t *current = *head;
	unsigned int cp = 0;

	if (*head == NULL && idx != 0)
		return (NULL);
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	while (current)
	{
		if (idx - cp == 1)
		{
			new->next = current->next;
			current->next = new;
			return (new);
		}
		cp++;
		current = current->next;
	}
	free(new);
	return (NULL);
}

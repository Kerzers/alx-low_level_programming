#include "lists.h"
#include <stdlib.h>
/**
 *delete_nodeint_at_index - deletes the node at index index of a listint_t
 *@head: double pointer to the head of a listint
 *@index:  index of the node that should be deleted. Index starts at 0
 *Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int cp = 0;
	listint_t *temp = NULL, *previous = NULL, *current = *head;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	while (current->next)
	{
		if (index - cp == 1)
		{
			temp = current->next;
			current->next = temp->next;
			free(temp);
			return (1);
		}
	cp++;
	previous = current;
	current = current->next;
	}
	if (index == cp)
	{
		previous->next = NULL;
		free(current);
		return (1);
	}
	return (-1);
}

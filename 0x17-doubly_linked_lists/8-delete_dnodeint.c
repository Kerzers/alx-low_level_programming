#include "lists.h"

/**
 *delete_dnodeint_at_index - deletes the node at index of
 * a dlistint_t linked list
 *@head: reference of the head
 *@index: the index of the node that should be deleted. Index starts at 0
 *Return: 1 if it succeeded, -1 if it failed
 *
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = NULL;
	unsigned int count = 0;

	if (!head || !*head)
		return (-1);
	if ((*head)->next == NULL && index == 0)
	{
		free(*head);
		*head = NULL;
		return (1);
	}
	current = *head;
	while (current->next)
	{
		if (index == 0)
		{
			*head = current->next;
			(current->next)->prev = NULL;
			free(current);
			return (1);
		}
		if (index == count)
		{	current->prev->next = current->next;
			current->next->prev = current->prev;
			free(current);
			return (1);
		}
		count++;
		current = current->next;
	}
	if (index == count)
	{	current->prev->next = NULL;
		free(current);
		return (1);
	}
	return (-1);
}

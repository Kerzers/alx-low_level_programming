#include "lists.h"

/**
 * free_dlistint - frees a double linked list
 * @head: head of a double linked list
 *
 * Return: nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp = NULL;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}

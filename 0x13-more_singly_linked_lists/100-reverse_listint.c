#include "lists.h"

/**
 *reverse_listint - reverses a listint_t linked list
 *@head: double pointer to the list
 *Return: the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *temp = *head, *previous = NULL;

	while (*head)
	{
		temp = *head;
		*head = (*head)->next;
		temp->next = previous;
		previous = temp;
	}
	*head = previous;
	return (*head);
}

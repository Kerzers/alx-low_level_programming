#include "lists.h"
#include <stdlib.h>

/**
 *pop_listint - deletes the head node of a listint_t linked list
 *@head: double pointer to the head of a listint
 *Return: the head node’s data n, 0 if linked list is empty
 */
int pop_listint(listint_t **head)
{
	int n = 0;
	listint_t *temp = *head;

	if (*head != NULL)
	{
		n = (*head)->n;
		*head = (*head)->next;
		free(temp);
	}
	return (n);
}

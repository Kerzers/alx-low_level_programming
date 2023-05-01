#include "lists.h"
#include <stdlib.h>
/**
 *free_listint2 - frees a listint and sets head to NULL
 *@head: double pointer to the beginning of a list
 *
 */
void free_listint2(listint_t **head)
{
	listint_t *temp = *head;

	if (head != NULL)
	{
	while (temp)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
	*head = NULL;
	}
}

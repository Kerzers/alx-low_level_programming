#include "lists.h"
#include <stdlib.h>
/**
 *free_listint - frees a listint
 *@head: pointer to the beginning of a listint
 *
 */
void free_listint(listint_t *head)
{
	listint_t *temp = head;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}

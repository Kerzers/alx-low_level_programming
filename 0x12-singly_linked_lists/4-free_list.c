#include "lists.h"
#include <stdlib.h>
/**
 * free_list - frees a given list
 * @head: the head of list of type list_t
 * Return: nothing
 */
void free_list(list_t *head)
{
	list_t *temp = head;

	while (temp)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}

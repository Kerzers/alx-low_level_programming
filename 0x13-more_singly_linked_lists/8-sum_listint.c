#include "lists.h"

/**
 *sum_listint - calculates the sum of all node's data
 *@head: the head of the list
 *Return: the sum of all the data (n), 0 if list is empty
 *
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}

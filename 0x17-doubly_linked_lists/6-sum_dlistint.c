#include "lists.h"
/**
 * sum_dlistint - sums all the data (n) of a dlistint_t linked list
 * @head: head of a double linked list
 *
 * Return: sum of all the data (n), 0 if list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *current = head;

	while (current)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}

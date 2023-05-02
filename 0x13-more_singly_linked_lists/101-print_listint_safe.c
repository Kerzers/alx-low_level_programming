#include "lists.h"
#include <stdio.h>

/**
 *print_listint_safe - prints listint ilnked list
 *@head: pointer to the head of a list
 *Return: the number of nodes in the list,
 * if the function fails exit program with status 98
 *
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t n;

	while (head)
	{
		n++;
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
	}
	return (n);
}

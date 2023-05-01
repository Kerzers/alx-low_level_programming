#include "lists.h"
#include <stdio.h>

/**
 * listint_len - prints all the elements of a listint_t list
 * @h: the list
 * Return: the number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}
	return (num);
}

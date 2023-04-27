#include "lists.h"

/**
 * list_len - prints the number of elements in a list_t list
 * @h: the list to be printed
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		n++;
		h = h->next;
	}
	return (n);
}

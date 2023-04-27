#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 * print_list - prints all the elements of a list_t list
 * @h: the list to be printed
 * Return: number of nodes
 *
 */
size_t print_list(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		if (h->len)
			printf("[%u] %s\n", h->len, h->str);
		else
			printf("[0] (nil)\n");
	n++;
	h = h->next;
	}
	return (n);
}

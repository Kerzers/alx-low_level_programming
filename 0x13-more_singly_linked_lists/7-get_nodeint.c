#include "lists.h"

/**
 *get_nodeint_at_index - returns the nth node of a listint_t linked list
 *@head: pointer to the head of a list
 *@index: the index of a node
 *Return: the nth node of a linked list, 0 if the node does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node = head;
	unsigned int cp = 0;

	while (node)
	{
		cp++;
		node = node->next;
		if (cp == index)
			return (node);
	}
	return (0);
}

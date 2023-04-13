#include "main.h"
#include <stdlib.h>
/**
 *_realloc - reallocates a memory block using malloc and free
 *@ptr: a pointer to the memory previously allocated
 *@old_size:s the size, in bytes, of the allocated space for ptr
 *@new_size: he new size, in bytes of the new memory block
 *Return: a poiner to the new memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p, *same;
	unsigned int i, max;

	if (ptr != NULL)
		same = ptr;
	else
	{
		p = malloc(new_size * sizeof(char));
		if (p == NULL)
		return (NULL);
	}
	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size > old_size)
		max = new_size;
	else
		max = old_size;
	p = malloc(max * sizeof(char));
	if (p == NULL)
		return (NULL);
	for (i = 0; i < max; i++)
		p[i] = same[i];
	free(ptr);
	return (p);
}

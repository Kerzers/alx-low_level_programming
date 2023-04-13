#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *_calloc - allocates memory for an array, using malloc
 *@nmemb: number of elements
 *@size: bytes of each element
 *Return: a pointer to the allocated memory. NULL if nmemb or size equal 0,
 * or malloc failed
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);
	for (i = 0; i < nmemb; i++)
		*((char *)p + i) = 0;
	return (p);
}

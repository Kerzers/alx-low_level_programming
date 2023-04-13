#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *malloc_checked - allocates memory using malloc
 *@b: size of memory
 *Return: a pointer to the allocated memory. if malloc fails,
 *malloc_checked function should exit with a status value of 98
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}

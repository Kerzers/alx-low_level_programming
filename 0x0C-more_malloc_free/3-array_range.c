#include "main.h"
#include <stdlib.h>
/**
 *array_range - creates an array of integers
 *@min: input 1
 *@max: input 2
 *Return: a pointer to an array that contains all the values from min to max,
 *If min > max or malloc fails, return NULL
 */
int *array_range(int min, int max)
{
	int *a;
	int i, l = 0;

	if (min > max)
		return (NULL);
	l = max - min + 1;
	a = malloc(l * sizeof(int));
	if (a == NULL)
		return (NULL);
	for (i = 0; i < l; i++)
	{
		a[i] = min;
		min++;
	}
	return (a);
}

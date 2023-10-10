#include "search_algos.h"
#include <math.h>

/**
 *jump_search - searches for a value in an array of integers
 * using the jump search algorithm
 *@array: pointer to the first element of the array to search in
 *@size: the number of elements in array sorted in ascending order
 *@value:the value to search for
 *
 *Return: the first index where value is located, otherwise -1
 */
int jump_search(int *array, size_t size, int value)
{
	size_t a = 0, b = 0, i;

	if (!array || size == 0)
		return (-1);

	do {
		printf("Value checked array[%ld] = [%d]\n", b, array[b]);
		if (array[b] == value)
			return (b);
		a = b;
		b += sqrt(size);
		if (a >= size)
			return (-1);
	} while (b < size && array[b] < value);
	printf("Value found between indexes [%ld] and [%ld]\n", a, b);

	for (i = a; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}

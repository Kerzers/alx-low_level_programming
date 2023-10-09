#include "search_algos.h"

void print(int *array, size_t l, size_t r);

/**
 *binary_search - searches for a value in an array of integers
 * using the Binary search algorith
 *@array: pointer to the first element of the array to search in
 *@size: the number of elements in a sorted array in ascending order
 *@value:the value to search for
 *
 *Return: the index where value is located, otherwise -1
 */
int binary_search(int *array, size_t size, int value)
{
	size_t l = 0, r = size - 1, m;

	if (!array)
		return (-1);

	while (l <= r)
	{
		m = (l + r) / 2;
		print(array, l, r);
		if (array[m] < value)
			l = m + 1;
		else if (array[m] > value)
			r = m - 1;
		else
			return (m);
	}
	return (-1);
}

/**
 *print - print an array
 *@array: array to be printed
 *@l: left index
 *@r: right index
 *
 */
void print(int *array, size_t l, size_t r)
{
	size_t i;

	printf("Searching in array: %d", array[l]);
	for (i = l + 1; i <= r; i++)
		printf(", %d", array[i]);
	printf("\n");
}

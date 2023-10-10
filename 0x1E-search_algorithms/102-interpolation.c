#include "search_algos.h"

/**
 *interpolation_search - searches for a value in an array of integers
 * using the Linear search algorithm
 *@array: pointer to the first element of the array to search in
 *@size: the number of elements in array sorted in ascending order
 *@value:the value to search for
 *
 *Return: the first index where value is located, otherwise -1
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t pos, high = size - 1, low = 0;
	double p;

	if (!array || size == 0)
		return (-1);

	while (low < high && value >= array[low] && value <= array[high])
	{
		p = (double)(high - low) / (array[high] - array[low]) * (value - array[low]);
		pos = (size_t)(low + p);
		if (pos >= size)
		{
			printf("Value checked array[%ld] is out of range\n", pos);
			break;
		}
		printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
		if (array[pos] == value)
			return (pos);
		else if (array[pos] < value)
			low = pos;
		else
			high = pos;
	}
	return (-1);
}

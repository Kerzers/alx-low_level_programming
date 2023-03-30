#include "main.h"
/**
 * reverse_array - reverses the contents of an array
 * @a: an array to reverse
 * @n: number of elements in an array
 * Return: nothing
 */
void reverse_array(int *a, int n)
{
	int temp, i;

	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = temp;
	}
}

#include "main.h"
#include <stdio.h>
/**
 * print_array - prints elements of an array
 * @a: an array as a parameter
 * @n: number of elements to print
 *
 */
void print_array(int *a, int n)
{
	int i;

	if (n > 0)
	{
	for (i = 0; i < n - 1; i++)
	{
	printf("%d, ", a[i]);
	}
	printf("%d\n", a[n - 1]);
	}
	if (n == 0)
	printf("%d\n", a[n]);
}

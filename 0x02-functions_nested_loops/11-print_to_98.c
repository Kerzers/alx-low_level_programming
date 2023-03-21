#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - Prints from a number n to 98
 *
 * @n: parameter of the function
 *
 */
void print_to_98(int n)
{
	int i;

	i = n;
	if (n <= 98)
	{
		while (i < 98)
		{
		printf("%d, ", i);
		i++;
		}
		printf("%d\n", 98);
	}
	else
	{
		while (i > 98)
		{
		printf("%d, ", i);
		i = i - 1;
		}
		printf("%d\n", 98);
	}
}

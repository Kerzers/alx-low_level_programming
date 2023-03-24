#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size:  the size of the triangle
 *
 * Return: nothing
 */
void print_triangle(int size)
{
	int i, j, k;

	if (size > 0)
	{
	for (i = 1; i <= size; i++)
	{
		for (k = 1; k <= (size - i) ; k++)
		{
		_putchar(' ');
		}
		for (j = k; j <= size; j++)
		{
		_putchar(35);
		}
	_putchar('\n');
	}
	}
	else
	{
	_putchar('\n');
	}
}

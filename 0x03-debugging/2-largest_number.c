#include "main.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
	int x;

	if (a > b)
	{
		x = a;
		a = b;
		b = x;
	}
	if (b > c)
	{
		x = b;
		b = c;
		c = x;
	}
	return (c);
}

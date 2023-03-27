#include "main.h"
/**
 * swap_int - swapes the value of two integers
 * @a: a parameter to swap
 * @b: a parameter to swap
 *
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

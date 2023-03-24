#include "main.h"

/**
 * print_number - Prints number
 * @n: number to print
 * Return: nothing
 */
void print_number(int n)
{
	int i;

	if (n < 0)
	{
	n *= -1;
	_putchar('-');
	}
	i = n;
	i = i / 10;
	if (i != 0)
	print_number(i);
	_putchar(n % 10 + '0');
}

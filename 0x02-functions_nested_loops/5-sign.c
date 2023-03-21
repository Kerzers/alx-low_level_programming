#include "main.h"

/**
 * print_sign - prints the sign of a number.
 *
 * @n: the number to check
 *
 * Return: 1 and prints + if n is greater than zero,
 * 0 and prints 0 if n is zero,
 * -1 and prints - if n is less than zero
 */
int print_sign(int n)
{
	int ret;

	if (n > 0)
	{
	_putchar('+');
	ret = 1;
	}
	else if (n == 0)
	{
	_putchar(0);
	ret = 0;
	}
	else
	{
	_putchar('-');
	ret = -1;
	}
	return (ret);
}

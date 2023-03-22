#include "main.h"

/**
 * print_last_digit - print the last digit of an integer
 *
 * @n: function's argument
 *
 * Return: last digit of n
 */
int print_last_digit(int n)
{
	int ret;

	if (n >= 0)
	{
		ret = n % 10;
	}
	else
	{
		ret = (-1 * n) % 10;
	}
	_putchar('0' + ret);
	return (ret);
}

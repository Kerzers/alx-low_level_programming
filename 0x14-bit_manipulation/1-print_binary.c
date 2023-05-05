#include "main.h"
#include <limits.h>

/**
 *print_binary - prints the binary representation of a number
 *@n: number to be printed in binary
 *Return: nothing
 */
void print_binary(unsigned long int n)
{
	int i, len = 0;
	unsigned long int c;

	if (n == 0)
		_putchar('0');
	if (n == ULONG_MAX)
	{
		for (i = 0; i < 64; i++)
			_putchar('1');
	return;
	}
	for (i = 0; n >> i; i++)
		len++;
	for (i = len - 1; i >= 0; i--)
	{
		c = (n >> i) & 1;
		_putchar(c + '0');
	}
}

#include "main.h"
/**
 * print_times_table - prints times table of an integer n
 * @n: parameter of the function
 */
void print_times_table(int n)
{
	int i, j, m;

	if ((n >= 0) && (n <= 15))
	{
	for (i = 0; i <= n; i++)
	{
	_putchar('0');
		for (j = 1; j <= n; j++)
		{
		m = i * j;
		_putchar(',');
		_putchar(' ');
			if (m > 99)
			{
			_putchar(m / 100 + '0');
			_putchar((m / 100) % 10 + '0');
			}
			else if (m > 9)
			{
			_putchar(' ');
			_putchar(m / 10 + '0');
			}
			else
			{
			_putchar(' ');
			_putchar(' ');
			}
		_putchar(m % 10 + '0');
		}
		_putchar('\n');
	}
	}
}

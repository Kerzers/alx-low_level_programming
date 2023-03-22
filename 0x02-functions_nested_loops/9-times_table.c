#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0.
 */
void times_table(void)
{
	int i = 0;
	int j, m;

	while (i <= 9)
	{
		j = 0;
		while (j <= 9)
		{
		m = i * j;
		if (j != 0)
		{
			if (m > 9)
			{
			_putchar(',');
			_putchar(' ');
			_putchar(m / 10 + '0');
			_putchar(m % 10 + '0');
			}
			else
			{
			_putchar(',');
			_putchar(' ');
			_putchar(' ');
			_putchar(m + '0');
			}
		}
		else
		{
			_putchar(m + '0');
		}
		j = j + 1;
		if (j == 10)
		_putchar('\n');
		}
	i = i + 1;
	}
}

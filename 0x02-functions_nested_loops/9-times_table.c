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
			if (m > 9)
			{
			_putchar(m / 10 + '0');
			_putchar(m % 10 + '0');
			}
			else
			{
			_putchar(m + '0');
			}
			if (j < 9)
			{
			_putchar(',');
			_putchar(' ');
			}
			if (((i * (j + 1)) / 10 == 0) && (i != 0))
			{
			_putchar(' ');
			}
			j = j + 1;
				if (j == 10)
				_putchar('\n');
		}
	i = i + 1;
	}
}

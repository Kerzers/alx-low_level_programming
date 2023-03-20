#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 0;
	int j = 1;

	while (i <= 98)
	{
		while (j <= 99)
		{
		putchar(i / 10 + '0');
		putchar(i % 10 + '0');
		putchar(' ');
		putchar(j / 10 + '0');
		putchar(j % 10 + '0');
		if ((i != 98) || (j != 99))
		{
		putchar(',');
		putchar(' ');
		}
		j = j + 1;
		}
	i = i + 1;
	j = i + 1;
	}
	putchar('\n');
	return (0);
}

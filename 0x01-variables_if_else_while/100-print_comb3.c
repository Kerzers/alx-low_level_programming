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

	while (i < 9)
	{
		while (j <= 9)
		{
		putchar(i + '0');
		putchar(j + '0');
			if ((i != 8) || (j != 9))
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

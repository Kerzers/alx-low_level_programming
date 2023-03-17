#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 0;

	while (i <= 9)
	{
	putchar(i + '0');
	i = i + 1;
	}
	putchar('\n');
	return (0);
}

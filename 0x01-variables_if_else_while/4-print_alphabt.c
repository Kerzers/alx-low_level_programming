#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		if ((c == 'e') || (c == 'q'))
		{
		c = c + 1;
		}
		else
		{
		putchar(c);
		c = c + 1;
		}
	}
	putchar('\n');
	return (0);
}

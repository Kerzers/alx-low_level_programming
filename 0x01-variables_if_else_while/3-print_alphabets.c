#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Succes)
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
	putchar(c);
	c = c + 1;
	}
	c = 'A';
	while (c <= 'Z')
	{
	putchar(c);
	c = c + 1;
	}
	putchar('\n');
	return (0);
}

#include "main.h"
/**
 * print_rev - Prints a string , in reverse
 * @s: a string to print
 * Return: nothing
 */
void print_rev(char *s)
{
	int i = 0;
	int j;

	while (s[i] != '\0')
		i++;
	for (j = i; j >= 0; j--)
	{
		_putchar(s[j]);
	}
	_putchar ('\n');
}

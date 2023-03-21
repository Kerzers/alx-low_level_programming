#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase,
 * followed by a new line.
 */
void print_alphabet_x10(void)
{
	int i = 1;
	char c;

	while (i <= 10)
	{
		c = 'a';
		while (a <= 'z')
		{
		_putchar(c);
		c = c + 1;
		}
	_putchar('\n');
	i = i + 1;
	}
}

#include "main.h"
/**
 * puts_half - prints half string
 * @str: a string to cut in half
 * Return: nothing
 */
void puts_half(char *str)
{
	int cp = 0;
	int i;

	while (str[cp] != '\0')
	{
	cp++;
	}
	if (cp % 2 == 0)
	{
		for (i = cp / 2; i < cp; i++)
		_putchar(str[i]);
	}
	else
	{
		for (i = (cp + 1) / 2; i < cp; i++)
			_putchar(str[i]);
	}
	_putchar('\n');
}

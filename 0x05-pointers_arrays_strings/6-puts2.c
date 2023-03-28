#include "main.h"
/**
 * puts2 - prints every other characher starting with the first one
 * @str: string as a parameter
 * Return: nothing
 */
void puts2(char *str)
{
	int cp = 0;

	while (*str != 0)
	{
		if (cp % 2 == 0)
		{
		_putchar(*str);
		}
		str++;
		cp++;
	}
	_putchar('\n');
}

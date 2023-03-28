#include "main.h"
/**
 * puts2 - prints every other characher starting with the first one
 * @str: string as a parameter
 * Return: nothing
 */
void puts2(char *str)
{
	while (*str != 0)
	{
		_putchar(*str);
		str += 2;
	}
	_putchar('\n');
}

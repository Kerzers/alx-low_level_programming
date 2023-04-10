#include "main.h"
/**
 * _puts - prints a string
 * @str: a string to print
 * Return: nothing
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
	_putchar(*str);
	str++;
	}
	_putchar('\n');
}
